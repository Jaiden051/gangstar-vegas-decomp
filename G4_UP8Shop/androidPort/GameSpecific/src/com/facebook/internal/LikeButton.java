// Decompiled from classes.dex (SourceFile: LikeButton.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.graphics.Typeface;
public class LikeButton extends android.widget.Button {
    // Fields
    private boolean isLiked;

    // Methods
    public LikeButton(android.content.Context p0, boolean p1)
    {
      super(p0);
      this.isLiked = p1;
      this.initialize();
    }

    private void initialize()
    {
      this.setGravity(16);
      this.setTextColor(this.getResources().getColor(2131230771));
      this.setTextSize(0, this.getResources().getDimension(2131361883));
      this.setTypeface(Typeface.DEFAULT_BOLD);
      this.setCompoundDrawablePadding(this.getResources().getDimensionPixelSize(2131361882));
      this.setPadding(this.getResources().getDimensionPixelSize(2131361878), this.getResources().getDimensionPixelSize(2131361880), this.getResources().getDimensionPixelSize(2131361879), this.getResources().getDimensionPixelSize(2131361881));
      this.updateForLikeStatus();
    }

    private void updateForLikeStatus()
    {
      if ( this.isLiked )
      {
        this.setBackgroundResource(2130837527);
        this.setCompoundDrawablesWithIntrinsicBounds(2130837525, 0, 0, 0);
        this.setText(this.getResources().getString(2131165497));
      }
      else
      {
        this.setBackgroundResource(2130837521);
        this.setCompoundDrawablesWithIntrinsicBounds(2130837524, 0, 0, 0);
        this.setText(this.getResources().getString(2131165496));
      }
    }

    public void setLikeState(boolean p0)
    {
      if ( p0 != this.isLiked )
      {
        this.isLiked = p0;
        this.updateForLikeStatus();
      }
    }

}
