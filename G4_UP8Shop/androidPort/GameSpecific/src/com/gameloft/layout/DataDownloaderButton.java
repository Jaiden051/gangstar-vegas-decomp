// Decompiled from classes.dex (SourceFile: DataDownloaderButton.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.layout;

import android.graphics.Typeface;
public class DataDownloaderButton extends android.widget.Button {
    // Methods
    private DataDownloaderButton(android.content.Context p0)
    {
      super(p0);
      this.a();
    }

    public DataDownloaderButton(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.a();
    }

    public DataDownloaderButton(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      this.a();
    }

    private void a()
    {
      if ( !this.isInEditMode() )
      {
        try
        {
          this.setTypeface(Typeface.createFromAsset(this.getContext().getAssets(), this.getContext().getString(2131165276)));
        }
        catch ( Exception e )
        {
        }
      }
    }

}
