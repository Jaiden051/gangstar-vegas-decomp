// Decompiled from classes.dex (SourceFile: bm.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class bm extends android.os.AsyncTask {
    // Methods
    bm()
    {
      super();
    }

    protected synchronized Void a(String[] p0)
    {
      com.amazon.device.associates.bi v2; // RETVAL
    
      try
      {
        v2 = bi.d();
        if ( v2 != null )
          v2.e();
        return null;
      }
      catch ( Exception v4 )
      {
        p.c("AsyncInternalRegistration", "Internal Registration failed. Ex=" + v4);
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
