// Decompiled from classes.dex (SourceFile: GraphObjectAdapter$SectionAndItem$Type.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class GraphObjectAdapter$SectionAndItem$Type extends com.gameloft.android.DecompRT.EnumBase<GraphObjectAdapter$SectionAndItem$Type> {
    // Fields
    private static final com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type[] $VALUES;
    public static final com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type ACTIVITY_CIRCLE;
    public static final com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type GRAPH_OBJECT;
    public static final com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type SECTION_HEADER;

    // Methods
    static
    {
      com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type[] v0;
      GRAPH_OBJECT = new com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type("GRAPH_OBJECT", 0);
      SECTION_HEADER = new com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type("SECTION_HEADER", 1);
      ACTIVITY_CIRCLE = new com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type("ACTIVITY_CIRCLE", 2);
      v0 = new com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type[3];
      v0[0] = GRAPH_OBJECT;
      v0[1] = SECTION_HEADER;
      v0[2] = ACTIVITY_CIRCLE;
      $VALUES = (com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type[])v0;
    }

    private GraphObjectAdapter$SectionAndItem$Type(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type valueOf(
            String p0)
    {
      return (com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                           com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type.class,
                                                                           p0);
    }

    public static com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type[] values()
    {
      return (com.facebook.widget.GraphObjectAdapter$SectionAndItem$Type[])$VALUES.clone();
    }

}
