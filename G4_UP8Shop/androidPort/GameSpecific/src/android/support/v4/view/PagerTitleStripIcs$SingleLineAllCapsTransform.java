// Decompiled from classes.dex (SourceFile: PagerTitleStripIcs$SingleLineAllCapsTransform.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class PagerTitleStripIcs$SingleLineAllCapsTransform extends android.text.method.SingleLineTransformationMethod {
    // Fields
    private static java.lang.String TAG;
    private java.util.Locale mLocale;

    // Methods
    public PagerTitleStripIcs$SingleLineAllCapsTransform(android.content.Context p0)
    {
      super();
      this.mLocale = (p0.getResources().getConfiguration()).locale;
    }

    public CharSequence getTransformation(
            CharSequence p0,
            android.view.View p1)
    {
      CharSequence Transformation; // RETVAL
    
      Transformation = super.getTransformation(p0, p1);
      if ( Transformation != null )
        return Transformation.toString().toUpperCase(this.mLocale);
      else
        return null;
    }

}
