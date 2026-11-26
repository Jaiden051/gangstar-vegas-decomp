// Decompiled from classes.dex (SourceFile: a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.c;

import com.amazon.device.iap.model.Receipt;
class a$1 implements java.lang.Runnable {
    // Fields
    final android.content.Context a;
    final com.amazon.device.iap.internal.c.a b;

    // Methods
    a$1(com.amazon.device.iap.internal.c.a p0, android.content.Context p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      android.content.SharedPreferences SharedPreferences;
      java.util.Iterator v2;
      String v3;
      try
      {
        com.amazon.device.iap.internal.util.e.a(com.amazon.device.iap.internal.c.a.b(), "perform house keeping! ");
        SharedPreferences = this.a.getSharedPreferences(com.amazon.device.iap.internal.c.a.c(), 0);
        v2 = SharedPreferences.getAll().keySet().iterator();
        while ( v2.hasNext() )
        {
          v3 = (String)v2.next();
          try
          {
            if ( System.currentTimeMillis() - c.a(SharedPreferences.getString(v3, null)).c() > com.amazon.device.iap.internal.c.a.d() )
            {
              com.amazon.device.iap.internal.util.e.a(com.amazon.device.iap.internal.c.a.b(), "house keeping - try remove Receipt:" + v3 + " since it's too old");
              this.b.a(v3);
            }
          }
          catch ( com.amazon.device.iap.internal.c.d e )
          {
            com.amazon.device.iap.internal.util.e.a(com.amazon.device.iap.internal.c.a.b(), "house keeping - try remove Receipt:" + v3 + " since it's invalid ");
            this.b.a(v3);
          }
        }
      }
      catch ( Throwable v4 )
      {
        com.amazon.device.iap.internal.util.e.a(com.amazon.device.iap.internal.c.a.b(), "Error in running cleaning job:" + v4);
      }
    }

}
