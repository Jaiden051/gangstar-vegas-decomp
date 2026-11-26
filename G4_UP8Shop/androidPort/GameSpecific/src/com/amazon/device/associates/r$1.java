// Decompiled from classes.dex (SourceFile: r$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class r$1 implements com.amazon.android.framework.task.Task {
    // Fields
    final android.content.Intent a;
    final com.amazon.device.associates.r b;

    // Methods
    r$1(com.amazon.device.associates.r p0, android.content.Intent p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void execute()
    {
      android.app.Activity Visible;
      try
      {
        Visible = r.a(this.b).getVisible();
        if ( Visible == null )
          Visible = r.a(this.b).getRoot();
        x.b(r.c(), "About to fire intent with activity " + Visible);
        Visible.startActivity(this.a);
      }
      catch ( Exception v2 )
      {
        x.b(r.c(), "Exception when attempting to fire intent: " + v2);
      }
    }

}
