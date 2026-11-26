// Decompiled from classes.dex (SourceFile: GraphObjectAdapter$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class GraphObjectAdapter$1 implements java.util.Comparator<com.facebook.model.GraphObject> {
    // Fields
    final com.facebook.widget.GraphObjectAdapter this$0;
    final java.text.Collator val$collator;

    // Methods
    GraphObjectAdapter$1(com.facebook.widget.GraphObjectAdapter p0, java.text.Collator p1)
    {
      super();
      this.this$0 = p0;
      this.val$collator = p1;
    
    }

    public int compare(com.facebook.model.GraphObject p0, com.facebook.model.GraphObject p1)
    {
      return GraphObjectAdapter.access$100(p0, p1, GraphObjectAdapter.access$000(this.this$0), this.val$collator);
    }



}
