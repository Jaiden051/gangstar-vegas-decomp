// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class o extends android.os.AsyncTask {
    // Fields
    private static final java.lang.String a;

    // Methods
    static
    {
      a = com.amazon.device.associates.o.class.getName();
    }

    o()
    {
      super();
    }

    protected synchronized Void a(String[] p0)
    {
      com.amazon.device.associates.be v2;
      try
      {
        v2 = new com.amazon.device.associates.be();
        v2.a(p0[0], p0[1], p0[2]);
        v2.e();
        return null;
      }
      catch ( Exception v4 )
      {
        p.c(a, "ImpressionRecoder Call failed. Ex=" + v4);
        return null;
      }
      finally
      {
      }
    }

    /* synthetic */ protected Object doInBackground(Object[] p0)
    {
      return this.a((String[])p0);
    }

}
