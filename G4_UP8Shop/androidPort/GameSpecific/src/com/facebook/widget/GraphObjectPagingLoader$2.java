// Decompiled from classes.dex (SourceFile: GraphObjectPagingLoader$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class GraphObjectPagingLoader$2 implements com.facebook.Request$Callback {
    // Fields
    final com.facebook.widget.GraphObjectPagingLoader this$0;

    // Methods
    GraphObjectPagingLoader$2(com.facebook.widget.GraphObjectPagingLoader p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      GraphObjectPagingLoader.access$000(this.this$0, p0);
    }

}
