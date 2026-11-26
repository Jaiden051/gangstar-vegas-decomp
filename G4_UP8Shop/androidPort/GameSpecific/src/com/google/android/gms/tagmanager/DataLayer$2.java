// Decompiled from classes.dex (SourceFile: DataLayer$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class DataLayer$2 implements com.google.android.gms.tagmanager.DataLayer$c$a {
    // Fields
    final com.google.android.gms.tagmanager.DataLayer a;

    // Methods
    DataLayer$2(com.google.android.gms.tagmanager.DataLayer p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(java.util.List<com.google.android.gms.tagmanager.DataLayer$a> p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      java.util.Iterator v2;
      com.google.android.gms.tagmanager.DataLayer$a v3;
      v2 = p0.iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.google.android.gms.tagmanager.DataLayer$a)v2.next();
        DataLayer.a(this.a, DataLayer.c(v3.a, v3.b));
      }
      DataLayer.a(this.a).countDown();
    }

}
