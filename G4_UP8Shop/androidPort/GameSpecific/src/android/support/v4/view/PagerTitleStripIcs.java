// Decompiled from classes.dex (SourceFile: PagerTitleStripIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class PagerTitleStripIcs {
    // Methods
    PagerTitleStripIcs()
    {
      super();
    }

    public static void setSingleLineAllCaps(android.widget.TextView p0)
    {
      p0.setTransformationMethod(new android.support.v4.view.PagerTitleStripIcs$SingleLineAllCapsTransform(p0.getContext()));
    }

}
