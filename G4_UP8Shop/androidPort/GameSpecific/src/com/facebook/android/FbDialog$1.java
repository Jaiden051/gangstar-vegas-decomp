// Decompiled from classes.dex (SourceFile: FbDialog$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

class FbDialog$1 implements com.facebook.widget.WebDialog$OnCompleteListener {
    // Fields
    final com.facebook.android.FbDialog this$0;

    // Methods
    FbDialog$1(com.facebook.android.FbDialog p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onComplete(android.os.Bundle p0, com.facebook.FacebookException p1)
    {
      FbDialog.access$000(this.this$0, p0, p1);
    }

}
