// Decompiled from classes.dex (SourceFile: aa.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class aa {
    // Fields
    final bolts.w a;
    final bolts.y b;

    // Methods
    aa(bolts.y p0, bolts.w p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(String p0)
    {
      try
      {
        this.a.a(new org.json.JSONArray(p0));
      }
      catch ( org.json.JSONException v2 )
      {
        this.a.a(v2);
      }
    }

}
