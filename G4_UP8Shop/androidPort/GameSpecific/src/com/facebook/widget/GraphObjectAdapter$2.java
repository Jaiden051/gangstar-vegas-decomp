// Decompiled from classes.dex (SourceFile: GraphObjectAdapter$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class GraphObjectAdapter$2 implements com.facebook.internal.ImageRequest$Callback {
    // Fields
    final com.facebook.widget.GraphObjectAdapter this$0;
    final android.widget.ImageView val$imageView;
    final java.lang.String val$profileId;

    // Methods
    GraphObjectAdapter$2(com.facebook.widget.GraphObjectAdapter p0, String p1, android.widget.ImageView p2)
    {
      super();
      this.this$0 = p0;
      this.val$profileId = p1;
      this.val$imageView = p2;
    
    }

    public void onCompleted(com.facebook.internal.ImageResponse p0)
    {
      GraphObjectAdapter.access$200(this.this$0, p0, this.val$profileId, this.val$imageView);
    }

}
