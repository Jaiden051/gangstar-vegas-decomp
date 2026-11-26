// Decompiled from classes.dex (SourceFile: b$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class b$1 implements java.lang.Runnable {
    // Fields
    final android.content.Intent a;
    final com.amazon.device.associates.b b;

    // Methods
    b$1(com.amazon.device.associates.b p0, android.content.Intent p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      b.a(this.b).b().startActivity(this.a);
    }

}
