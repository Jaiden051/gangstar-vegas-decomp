// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

import android.net.Uri;
public class b_b extends com.amazon.android.framework.prompt.SimplePrompt {
    // Fields
    private static final java.lang.String a;
    private com.amazon.android.framework.context.ContextManager b;
    private final com.amazon.android.framework.prompt.PromptContent c;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.b_b.class.getSimpleName();
    }

    public b_b(com.amazon.android.framework.prompt.PromptContent p0)
    {
      super(p0);
      this.c = p0;
    }

    protected void doAction()
    {
      android.app.Activity Visible;
      com.amazon.device.iap.internal.util.e.a(a, "doAction");
      if ( "Amazon Appstore required".equalsIgnoreCase(this.c.getTitle())
        || "Amazon Appstore Update Required".equalsIgnoreCase(this.c.getTitle()) )
      {
        try
        {
          Visible = this.b.getVisible();
          if ( Visible == null )
            Visible = this.b.getRoot();
          Visible.startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                                           "http://www.amazon.com/gp/mas/get-" +
                                                                                           "appstore/android/ref=mas_mx_mba_iap_dl")));
        }
        catch ( Exception v2 )
        {
          com.amazon.device.iap.internal.util.e.b(a, "Exception in PurchaseItemCommandTask.OnSuccess: " + v2);
        }
      }
    }

    protected long getExpirationDurationInSeconds()
    {
      return 31536000;
    }

    public String toString()
    {
      return a;
    }

}
