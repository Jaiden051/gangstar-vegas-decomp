// Decompiled from classes.dex (SourceFile: GraphObjectAdapter$SectionAndItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public class GraphObjectAdapter$SectionAndItem<T extends com.facebook.model.GraphObject> {
    // Fields
    public com.facebook.model.GraphObject graphObject;
    public java.lang.String sectionKey;

    // Methods
    public GraphObjectAdapter$SectionAndItem(String p0, T p1)
    {
      super();
      this.sectionKey = p0;
      this.graphObject = p1;
    }

    public com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type getType()
    {
      if ( this.sectionKey == null )
        return GraphObjectAdapter$SectionAndItem$Type.ACTIVITY_CIRCLE;
      if ( this.graphObject != null )
        return GraphObjectAdapter$SectionAndItem$Type.GRAPH_OBJECT;
      return GraphObjectAdapter$SectionAndItem$Type.SECTION_HEADER;
    }

}
