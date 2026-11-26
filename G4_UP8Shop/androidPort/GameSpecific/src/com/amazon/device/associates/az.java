// Decompiled from classes.dex (SourceFile: az.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.net.Uri;
final class az extends com.amazon.android.framework.prompt.SimplePrompt {
    // Fields
    private static final java.lang.String a;
    private static final java.util.Set b;
    private com.amazon.android.framework.context.ContextManager c;
    private final com.amazon.android.framework.prompt.PromptContent d;

    // Methods
    static
    {
      java.util.HashSet v0;
      a = com.amazon.device.associates.az.class.getSimpleName();
      v0 = new java.util.HashSet();
      b = v0;
      v0.add("Amazon Appstore Update Required");
      b.add("Aktualisierung von Amazon App-Shop erforderlich");
      b.add("Es necesario actualizar Tienda Apps de Amazon");
      b.add("Mise à jour requise pour Amazon Appstore");
      b.add("La mise à jour de Amazon App-Shop est requise");
      b.add("Amazon App-Shop Aggiornamento necessario");
      b.add("Amazon アプリストア 更新が必要です");
      b.add("Atualização da Loja de Apps da Amazon necessária");
      b.add("已请求 亚马逊应用商店 更新");
    }

    az(com.amazon.android.framework.prompt.PromptContent p0)
    {
      super(p0);
      this.d = p0;
    }

    protected final void doAction()
    {
      android.app.Activity Visible;
      x.b(a, "doAction");
      if ( "Amazon Appstore required".equalsIgnoreCase(this.d.getTitle()) || b.contains(this.d.getTitle()) )
      {
        try
        {
          Visible = this.c.getVisible();
          if ( Visible == null )
            Visible = this.c.getRoot();
          Visible.startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                                           "http://www.amazon.com/gp/mas/get-" +
                                                                                           "appstore/android/ref=mas_mx_mba_iap_dl")));
        }
        catch ( Exception v2 )
        {
          x.b(a, "Exception in PurchaseItemCommandTask.OnSuccess: " + v2);
        }
      }
    }

    protected final long getExpirationDurationInSeconds()
    {
      return 31536000;
    }

    public final String toString()
    {
      return a;
    }

}
