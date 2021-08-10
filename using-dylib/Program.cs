using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace testbyseven
{
  class Program
  {
    const string LIBDLL = "stringutil";

    [DllImport(LIBDLL)]
    public static extern IntPtr GetLog();

    static void Main(string[] args)
    {
      Console.WriteLine("Hello World!");

      Console.WriteLine(ConvertStringV2(GetLog()));
    }

    private static string ConvertString(IntPtr data, bool utf8 = true)
    {
      string asciValue = Marshal.PtrToStringAnsi(data);
      if (!utf8)
        return asciValue;

      int length = asciValue.Length;
      byte[] bytes = new byte[length];
      Marshal.Copy(data, bytes, 0, length);
      return System.Text.Encoding.UTF8.GetString(bytes);
    }

    private static string ConvertStringV2(IntPtr data, bool utf8 = true)
    {
      if (utf8)
      {
        return Marshal.PtrToStringUTF8(data);
      }

      return Marshal.PtrToStringAnsi(data);
    }
  }

}
