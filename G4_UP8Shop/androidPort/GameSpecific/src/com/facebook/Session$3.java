// Decompiled from classes.dex (SourceFile: Session$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$3 implements com.facebook.AuthorizationClient$OnCompletedListener {
    // Fields
    final com.facebook.Session this$0;

    // Methods
    Session$3(com.facebook.Session p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.AuthorizationClient$Result p0)
    {
      int v2;
      if ( p0.code == AuthorizationClient$Result$Code.CANCEL )
        v2 = 0;
      else
        v2 = -1;
      Session.access$1100(this.this$0, v2, p0);
    }

}
