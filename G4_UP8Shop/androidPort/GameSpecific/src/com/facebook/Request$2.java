// Decompiled from classes.dex (SourceFile: Request$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class Request$2 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.Request$GraphUserListCallback val$callback;

    // Methods
    Request$2(com.facebook.Request$GraphUserListCallback p0)
    {
      super();
      this.val$callback = p0;
    
    }

    public final void onCompleted(com.facebook.Response p0)
    {
      if ( this.val$callback != null )
        this.val$callback.onCompleted(Request.access$000(p0, com.facebook.model.GraphUser.class), p0);
    }

}
