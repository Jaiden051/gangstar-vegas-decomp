// Decompiled from classes.dex (SourceFile: VASTActivity$TextViewOutline.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

import android.graphics.Paint;
class VASTActivity$TextViewOutline extends android.widget.TextView {
    // Fields
    final com.gameloft.glads.vast.activity.VASTActivity a;
    private android.graphics.Paint mTextPaint;
    private android.graphics.Paint mTextPaintOutline;

    // Methods
    public VASTActivity$TextViewOutline(com.gameloft.glads.vast.activity.VASTActivity p0, android.content.Context p1)
    {
      super(p1);
      this.a = p0;
    
    }

    /* synthetic */ static void access$400(
            com.gameloft.glads.vast.activity.VASTActivity$TextViewOutline p0)
    {
      p0.initTextViewOutline();
    }

    private void initTextViewOutline()
    {
      this.mTextPaint = new android.graphics.Paint();
      this.mTextPaint.setAntiAlias(true);
      this.mTextPaint.setTextSize(100.0f);
      this.mTextPaint.setColor(-1);
      this.mTextPaint.setStyle(Paint.Style.FILL);
      this.mTextPaintOutline = new android.graphics.Paint();
      this.mTextPaintOutline.setAntiAlias(true);
      this.mTextPaintOutline.setTextSize(100.0f);
      this.mTextPaintOutline.setColor(-16777216);
      this.mTextPaintOutline.setStyle(Paint.Style.STROKE);
      this.mTextPaintOutline.setStrokeWidth(20.0f);
    }

    protected void onDraw(android.graphics.Canvas p0)
    {
      p0.drawText(this.getText().toString(), (float)this.getPaddingLeft(), (float)(this.getPaddingTop() + 100), this.mTextPaintOutline);
      p0.drawText(this.getText().toString(), (float)this.getPaddingLeft(), (float)(this.getPaddingTop() + 100), this.mTextPaint);
    }

}
