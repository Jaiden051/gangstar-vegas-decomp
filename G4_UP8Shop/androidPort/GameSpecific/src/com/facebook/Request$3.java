// Decompiled from classes.dex (SourceFile: Request$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class Request$3 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.Request$GraphPlaceListCallback val$callback;

    // Methods
    Request$3(com.facebook.Request$GraphPlaceListCallback p0)
    {
      super();
      this.val$callback = p0;
    
    }

    public final void onCompleted(com.facebook.Response p0)
    {
      if ( this.val$callback != null )
        this.val$callback.onCompleted(Request.access$000(p0, com.facebook.model.GraphPlace.class), p0);
    }

}
