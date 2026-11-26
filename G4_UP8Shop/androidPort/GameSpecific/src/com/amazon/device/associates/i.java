// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class i extends com.amazon.device.associates.bj {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static java.lang.String g;
    public static java.lang.String h;
    private java.util.HashMap l;

    // Methods
    static
    {
      a = "AsinURL";
      b = "HomePage";
      c = "Parameter";
      d = "SearchCategory";
      e = "PreviewPage";
      f = "UdpDetailPage";
      g = "UdpMP3AlbumDetailPage";
      h = "UdpMP3TrackDetailPage";
    }

    i()
    {
      super();
      this.l = new java.util.HashMap();
    }

    public java.util.HashMap<String, String> a()
    {
      return this.l;
    }

    public void a(String p0, String p1)
    {
      this.l.put(p0, p1);
    }

}
