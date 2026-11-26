// Decompiled from classes.dex (SourceFile: fs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fs implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.ft CREATOR;
    final int a;
    final com.google.android.gms.internal.fj b;
    final long c;
    final int d;
    public final java.lang.String e;
    final com.google.android.gms.internal.fh f;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.ft();
    }

    fs(int p0, com.google.android.gms.internal.fj p1, long p2, int p4, String p5, com.google.android.gms.internal.fh p6)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p4;
      this.e = p5;
      this.f = p6;
    }

    public fs(com.google.android.gms.internal.fj p0, long p1, int p3)
    {
      this(1, p0, p1, 3, null, null);
    }

    public fs(
            String p0,
            android.content.Intent p1,
            String p2,
            android.net.Uri p3,
            String p4,
            java.util.List<com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink> p5)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      this(1, a(p0, p1), System.currentTimeMillis(), 0, null, a(p1, p2, p3, null, p5));
    }

    static com.google.android.gms.internal.fh a(
            android.content.Intent p0,
            String p1,
            android.net.Uri p2,
            String p3,
            java.util.List<com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink> p4)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      java.util.List v5;
      String Action; // RETVAL
      String DataString; // RETVAL
      android.content.ComponentName Component; // RETVAL
      android.os.Bundle Extras; // RETVAL
      String String; // RETVAL
    
      v5 = new java.util.ArrayList();
      v5.add(ab(p1));
      if ( p2 != null )
        v5.add(e(p2));
      if ( p4 != null )
        v5.add(a(p4));
      Action = p0.getAction();
      if ( Action != null )
        v5.add(f("intent_action", Action));
      DataString = p0.getDataString();
      if ( DataString != null )
        v5.add(f("intent_data", DataString));
      Component = p0.getComponent();
      if ( Component != null )
        v5.add(f("intent_activity", Component.getClassName()));
      Extras = p0.getExtras();
      if ( Extras != null )
      {
        String = Extras.getString("intent_extra_data_key");
        if ( String != null )
          v5.add(f("intent_extra_data", String));
      }
      return new com.google.android.gms.internal.fh(p3, true, (com.google.android.gms.internal.fl[])v5.toArray(new com.google.android.gms.internal.fl[v5.size()]));
    }

    public static com.google.android.gms.internal.fj a(String p0, android.content.Intent p1)
    {
      return new com.google.android.gms.internal.fj(p0, "", f(p1));
    }

    private static com.google.android.gms.internal.fl a(
            java.util.List<com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink> p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      com.google.android.gms.internal.iw$a v1;
      com.google.android.gms.internal.iw$a$a[] v2;
      int i;
      com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink v4;
      v1 = new com.google.android.gms.internal.iw$a();
      v2 = new com.google.android.gms.internal.iw$a$a[p0.size()];
      for ( i = 0; i < v2.length; ++i )
      {
        v2[i] = new com.google.android.gms.internal.iw$a$a();
        v4 = (com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink)p0.get(i);
        (v2[i]).a = v4.a.toString();
        (v2[i]).b = v4.b.toString();
        (v2[i]).c = v4.c;
      }
      v1.a = (com.google.android.gms.internal.iw$a$a[])v2;
      return new com.google.android.gms.internal.fl(mf.d(v1), new com.google.android.gms.internal.fq$a("outlinks").a(true).b(".private:outLinks").a("blob").a());
    }

    private static com.google.android.gms.internal.fl ab(String p0)
    {
      return new com.google.android.gms.internal.fl(p0, new com.google.android.gms.internal.fq$a("title").a(1).b(true).b("name").a(), "text1");
    }

    private static com.google.android.gms.internal.fl e(android.net.Uri p0)
    {
      return new com.google.android.gms.internal.fl(p0.toString(), new com.google.android.gms.internal.fq$a("web_url").a(4).a(true).b("url").a());
    }

    private static com.google.android.gms.internal.fl f(String p0, String p1)
    {
      return new com.google.android.gms.internal.fl(p1, new com.google.android.gms.internal.fq$a(p0).a(true).a(), p0);
    }

    private static String f(android.content.Intent p0)
    {
      String v1; // RETVAL
      java.util.zip.CRC32 v2;
      v1 = p0.toUri(1);
      v2 = new java.util.zip.CRC32();
      try
      {
        v2.update(v1.getBytes("UTF-8"));
        return Long.toHexString(v2.getValue());
      }
      catch ( java.io.UnsupportedEncodingException v4 )
      {
        throw new IllegalStateException(v4);
      }
    }

    public int describeContents()
    {
      return 0;
    }

    public String toString()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = this.b;
      v1[1] = Long.valueOf(this.c);
      v1[2] = Integer.valueOf(this.d);
      return String.format("UsageInfo[documentId=%s, timestamp=%d, usageType=%d]", v1);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ft.a(this, p0, p1);
    }

}
