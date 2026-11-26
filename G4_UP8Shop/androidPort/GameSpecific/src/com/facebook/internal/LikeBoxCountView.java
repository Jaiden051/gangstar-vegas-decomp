// Decompiled from classes.dex (SourceFile: LikeBoxCountView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.graphics.Paint;
public class LikeBoxCountView extends android.widget.FrameLayout {
    // Fields
    private int additionalTextPadding;
    private android.graphics.Paint borderPaint;
    private float borderRadius;
    private float caretHeight;
    private com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition caretPosition;
    private float caretWidth;
    private android.widget.TextView likeCountLabel;
    private int textPadding;

    // Methods
    public LikeBoxCountView(android.content.Context p0)
    {
      super(p0);
      this.caretPosition = LikeBoxCountView$LikeBoxCountViewCaretPosition.LEFT;
      this.initialize(p0);
    }

    private void drawBorder(android.graphics.Canvas p0, float p1, float p2, float p3, float p4)
    {
      android.graphics.Path v6;
      float v7;
      v6 = new android.graphics.Path();
      v7 = this.borderRadius * 2.0f;
      v6.addArc(new android.graphics.RectF(p1, p2, p1 + v7, p2 + v7), -180.0f, 90.0f);
      if ( this.caretPosition == LikeBoxCountView$LikeBoxCountViewCaretPosition.TOP )
      {
        v6.lineTo((p3 - p1 - this.caretWidth) / 2.0f + p1, p2);
        v6.lineTo((p3 - p1) / 2.0f + p1, p2 - this.caretHeight);
        v6.lineTo((p3 - p1 + this.caretWidth) / 2.0f + p1, p2);
      }
      v6.lineTo(p3 - this.borderRadius, p2);
      v6.addArc(new android.graphics.RectF(p3 - v7, p2, p3, p2 + v7), -90.0f, 90.0f);
      if ( this.caretPosition == LikeBoxCountView$LikeBoxCountViewCaretPosition.RIGHT )
      {
        v6.lineTo(p3, (p4 - p2 - this.caretWidth) / 2.0f + p2);
        v6.lineTo(this.caretHeight + p3, (p4 - p2) / 2.0f + p2);
        v6.lineTo(p3, (p4 - p2 + this.caretWidth) / 2.0f + p2);
      }
      v6.lineTo(p3, p4 - this.borderRadius);
      v6.addArc(new android.graphics.RectF(p3 - v7, p4 - v7, p3, p4), 0.0f, 90.0f);
      if ( this.caretPosition == LikeBoxCountView$LikeBoxCountViewCaretPosition.BOTTOM )
      {
        v6.lineTo((p3 - p1 + this.caretWidth) / 2.0f + p1, p4);
        v6.lineTo((p3 - p1) / 2.0f + p1, this.caretHeight + p4);
        v6.lineTo((p3 - p1 - this.caretWidth) / 2.0f + p1, p4);
      }
      v6.lineTo(this.borderRadius + p1, p4);
      v6.addArc(new android.graphics.RectF(p1, p4 - v7, v7 + p1, p4), 90.0f, 90.0f);
      if ( this.caretPosition == LikeBoxCountView$LikeBoxCountViewCaretPosition.LEFT )
      {
        v6.lineTo(p1, (p4 - p2 + this.caretWidth) / 2.0f + p2);
        v6.lineTo(p1 - this.caretHeight, (p4 - p2) / 2.0f + p2);
        v6.lineTo(p1, (p4 - p2 - this.caretWidth) / 2.0f + p2);
      }
      v6.lineTo(p1, this.borderRadius + p2);
      p0.drawPath(v6, this.borderPaint);
    }

    private void initialize(android.content.Context p0)
    {
      this.setWillNotDraw(false);
      this.caretHeight = this.getResources().getDimension(2131361885);
      this.caretWidth = this.getResources().getDimension(2131361884);
      this.borderRadius = this.getResources().getDimension(2131361886);
      this.borderPaint = new android.graphics.Paint();
      this.borderPaint.setColor(this.getResources().getColor(2131230772));
      this.borderPaint.setStrokeWidth(this.getResources().getDimension(2131361887));
      this.borderPaint.setStyle(Paint.Style.STROKE);
      this.initializeLikeCountLabel(p0);
      this.addView(this.likeCountLabel);
      this.setCaretPosition(this.caretPosition);
    }

    private void initializeLikeCountLabel(android.content.Context p0)
    {
      this.likeCountLabel = new android.widget.TextView(p0);
      this.likeCountLabel.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-1, -1));
      this.likeCountLabel.setGravity(17);
      this.likeCountLabel.setTextSize(0, this.getResources().getDimension(2131361888));
      this.likeCountLabel.setTextColor(this.getResources().getColor(2131230773));
      this.textPadding = this.getResources().getDimensionPixelSize(2131361889);
      this.additionalTextPadding = this.getResources().getDimensionPixelSize(2131361885);
    }

    private void setAdditionalTextPadding(int p0, int p1, int p2, int p3)
    {
      this.likeCountLabel.setPadding(this.textPadding + p0, this.textPadding + p1, this.textPadding + p2, this.textPadding + p3);
    }

    protected void onDraw(android.graphics.Canvas p0)
    {
      int PaddingTop;
      int PaddingLeft;
      int v4;
      int v5;
      super.onDraw(p0);
      PaddingTop = this.getPaddingTop();
      PaddingLeft = this.getPaddingLeft();
      v4 = this.getWidth() - this.getPaddingRight();
      v5 = this.getHeight() - this.getPaddingBottom();
      switch ( LikeBoxCountView$1.$SwitchMap$com$facebook$internal$LikeBoxCountView$LikeBoxCountViewCaretPosition[this.caretPosition.ordinal()] )
      {
        case 1:
          PaddingLeft = (int)((float)PaddingLeft + this.caretHeight);
          break;
        case 2:
          PaddingTop = (int)((float)PaddingTop + this.caretHeight);
          break;
        case 3:
          v4 = (int)((float)v4 - this.caretHeight);
          break;
        case 4:
          v5 = (int)((float)v5 - this.caretHeight);
          break;
        default:
          break;
      }
      this.drawBorder(p0, (float)PaddingLeft, (float)PaddingTop, (float)v4, (float)v5);
    }

    public void setCaretPosition(com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition p0)
    {
      this.caretPosition = p0;
      switch ( LikeBoxCountView$1.$SwitchMap$com$facebook$internal$LikeBoxCountView$LikeBoxCountViewCaretPosition[p0.ordinal()] )
      {
        case 1:
          this.setAdditionalTextPadding(this.additionalTextPadding, 0, 0, 0);
          break;
        case 2:
          this.setAdditionalTextPadding(0, this.additionalTextPadding, 0, 0);
          break;
        case 3:
          this.setAdditionalTextPadding(0, 0, this.additionalTextPadding, 0);
          break;
        case 4:
          this.setAdditionalTextPadding(0, 0, 0, this.additionalTextPadding);
          break;
        default:
          return;
      }
    }

    public void setText(String p0)
    {
      this.likeCountLabel.setText(p0);
    }

}
