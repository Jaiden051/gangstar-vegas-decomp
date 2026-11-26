// Decompiled from classes.dex (SourceFile: Request$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class Request$1 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.Request$GraphUserCallback val$callback;

    // Methods
    Request$1(com.facebook.Request$GraphUserCallback p0)
    {
      super();
      this.val$callback = p0;
    
    }

    public final void onCompleted(com.facebook.Response p0)
    {
      if ( this.val$callback != null )
        this.val$callback.onCompleted((com.facebook.model.GraphUser)p0.getGraphObjectAs(com.facebook.model.GraphUser.class), p0);
    }

}
