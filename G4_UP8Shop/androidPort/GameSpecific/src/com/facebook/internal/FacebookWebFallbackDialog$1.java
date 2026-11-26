// Decompiled from classes.dex (SourceFile: FacebookWebFallbackDialog$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.widget.FacebookDialog;
final class FacebookWebFallbackDialog$1 implements com.facebook.widget.WebDialog$OnCompleteListener {
    // Fields
    final com.facebook.widget.FacebookDialog$PendingCall val$appCall;
    final com.facebook.widget.FacebookDialog$Callback val$callback;
    final android.content.Context val$context;

    // Methods
    FacebookWebFallbackDialog$1(
            android.content.Context p0,
            com.facebook.widget.FacebookDialog$PendingCall p1,
            com.facebook.widget.FacebookDialog$Callback p2)
    {
      super();
      this.val$context = p0;
      this.val$appCall = p1;
      this.val$callback = p2;
    
    }

    public final void onComplete(android.os.Bundle p0, com.facebook.FacebookException p1)
    {
      android.content.Intent v3;
      v3 = new android.content.Intent();
      if ( p0 == null )
        p0 = new android.os.Bundle();
      v3.putExtras(p0);
      FacebookDialog.handleActivityResult(
        this.val$context,
        this.val$appCall,
        this.val$appCall.getRequestCode(),
        v3,
        this.val$callback);
    }

}
