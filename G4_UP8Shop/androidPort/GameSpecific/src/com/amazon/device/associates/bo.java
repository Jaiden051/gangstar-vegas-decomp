// Decompiled from classes.dex (SourceFile: bo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class bo {
    // Fields
    public static final java.text.DateFormat a;
    public static java.lang.String b;
    private static java.lang.String c;
    private static boolean d;
    private static android.content.Context e;

    // Methods
    static
    {
      a = new java.text.SimpleDateFormat("yyyy/MM/dd HH:mm:ss");
      c = "AmazonMobileAssociates";
      d = false;
    }

    bo()
    {
      super();
    }

    protected static int a(String p0, String p1)
    {
      return a().getResources().getIdentifier(p0, p1, a().getPackageName());
    }

    protected static android.content.Context a()
    {
      return e;
    }

    public static void a(android.content.Context p0, String p1)
    {
      android.content.SharedPreferences.Editor v2;
      e = p0;
      b = p0.getFilesDir().getAbsolutePath() + "/";
      if ( b() != null && !b().equals(p1) )
        y.b(b + "rut.db");
      v2 = p0.getSharedPreferences(c, 0).edit();
      v2.putString("amzn-ad-app-id", p1);
      v2.commit();
      d = true;
    }

    protected static String b()
    {
      return e.getSharedPreferences(c, 0).getString("amzn-ad-app-id", null);
    }

}
