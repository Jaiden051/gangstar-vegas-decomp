// Decompiled from classes.dex (SourceFile: a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b.b;

import com.amazon.device.iap.internal.util.MetricsHelper;
class a$1 implements com.amazon.android.framework.task.Task {
    // Fields
    final android.content.Intent a;
    final com.amazon.device.iap.internal.b.b.a b;

    // Methods
    a$1(com.amazon.device.iap.internal.b.b.a p0, android.content.Intent p1)
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
        Visible = this.b.b.getVisible();
        if ( Visible == null )
          Visible = this.b.b.getRoot();
        com.amazon.device.iap.internal.util.e.a(com.amazon.device.iap.internal.b.b.a.a(), "About to fire intent with activity " + Visible);
        Visible.startActivity(this.a);
      }
      catch ( Exception v2 )
      {
        MetricsHelper.submitExceptionMetrics(com.amazon.device.iap.internal.b.b.a.a(this.b), com.amazon.device.iap.internal.b.b.a.a() + ".onResult().execute()", v2);
        com.amazon.device.iap.internal.util.e.b(com.amazon.device.iap.internal.b.b.a.a(), "Exception when attempting to fire intent: " + v2);
      }
    }

}
