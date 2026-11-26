// Decompiled from classes.dex (SourceFile: GraphObjectPagingLoader$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.Request;
class GraphObjectPagingLoader$3 implements java.lang.Runnable {
    // Fields
    final com.facebook.widget.GraphObjectPagingLoader this$0;
    final com.facebook.RequestBatch val$batch;

    // Methods
    GraphObjectPagingLoader$3(com.facebook.widget.GraphObjectPagingLoader p0, com.facebook.RequestBatch p1)
    {
      super();
      this.this$0 = p0;
      this.val$batch = p1;
    
    }

    public void run()
    {
      Request.executeBatchAsync(this.val$batch);
    }

}
