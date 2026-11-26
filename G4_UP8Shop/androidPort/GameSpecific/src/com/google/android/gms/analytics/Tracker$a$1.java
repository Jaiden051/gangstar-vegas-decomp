// Decompiled from classes.dex (SourceFile: Tracker$a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class Tracker$a$1 implements com.google.android.gms.analytics.i {
    // Fields
    final com.google.android.gms.analytics.Tracker a;
    final com.google.android.gms.analytics.Tracker$a b;

    // Methods
    Tracker$a$1(com.google.android.gms.analytics.Tracker$a p0, com.google.android.gms.analytics.Tracker p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final long a()
    {
      return System.currentTimeMillis();
    }

}
