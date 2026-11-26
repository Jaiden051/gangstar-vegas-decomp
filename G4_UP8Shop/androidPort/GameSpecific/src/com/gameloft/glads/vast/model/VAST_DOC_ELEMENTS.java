// Decompiled from classes.dex (SourceFile: VAST_DOC_ELEMENTS.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.model;

public final class VAST_DOC_ELEMENTS extends com.gameloft.android.DecompRT.EnumBase<VAST_DOC_ELEMENTS> {
    // Fields
    private static final com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS[] $VALUES;
    public static final com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS vastAdTagURI;
    public static final com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS vastVersion;
    public static final com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS vastVersionAttribute;
    public static final com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS vasts;
    private java.lang.String value;

    // Methods
    static
    {
      com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS[] v0;
      vastVersion = new com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS("vastVersion", 0, "2.0");
      vasts = new com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS("vasts", 1, "VASTS");
      vastAdTagURI = new com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS("vastAdTagURI", 2, "VASTAdTagURI");
      vastVersionAttribute = new com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS("vastVersionAttribute", 3, "version");
      v0 = new com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS[4];
      v0[0] = vastVersion;
      v0[1] = vasts;
      v0[2] = vastAdTagURI;
      v0[3] = vastVersionAttribute;
      $VALUES = (com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS[])v0;
    }

    private VAST_DOC_ELEMENTS(String p0, int p1, String p2)
    {
      super(p0, p1);
      this.value = p2;
    }

    public static com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS valueOf(String p0)
    {
      return (com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS.class,
                                                                p0);
    }

    public static com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS[] values()
    {
      return (com.gameloft.glads.vast.model.VAST_DOC_ELEMENTS[])$VALUES.clone();
    }

    public final String getValue()
    {
      return this.value;
    }

}
