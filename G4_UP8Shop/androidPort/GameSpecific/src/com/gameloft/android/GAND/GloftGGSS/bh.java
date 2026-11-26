// Decompiled from classes.dex (SourceFile: bh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.app.ProgressDialog;
import android.net.Uri;
import android.util.TypedValue;
import android.widget.ImageView;
final class bh implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final java.lang.String c;
    final android.graphics.Bitmap d;
    final com.gameloft.android.GAND.GloftGGSS.bg e;

    // Methods
    bh(com.gameloft.android.GAND.GloftGGSS.bg p0, String p1, String p2, String p3, android.graphics.Bitmap p4)
    {
      super();
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    
    }

    public final void run()
    {
      android.widget.RelativeLayout.LayoutParams v1;
      android.app.ProgressDialog v2;
      android.widget.ImageButton v3;
      float v4; // RETVAL
      android.widget.RelativeLayout.LayoutParams v5;
      IGPFreemiumActivity.access$302(this.e.c, true);
      IGPFreemiumActivity.access$702(this.e.c, new android.widget.RelativeLayout(this.e.a));
      this.e.c.setContentView(IGPFreemiumActivity.access$700(this.e.c));
      IGPFreemiumActivity.access$402(this.e.c, new android.widget.VideoView(this.e.a));
      v1 = new android.widget.RelativeLayout.LayoutParams(-1, -1);
      v1.addRule(13);
      IGPFreemiumActivity.access$700(this.e.c).addView(IGPFreemiumActivity.access$400(this.e.c), v1);
      v2 = ProgressDialog.show(
             this.e.c,
             null,
             this.e.c.getString(IGPFreemiumActivity.access$800(this.e.c)[IGPFreemiumActivity.access$900(this.e.c)]));
      v2.setCancelable(true);
      IGPFreemiumActivity.access$400(this.e.c).setMediaController(null);
      IGPFreemiumActivity.access$400(this.e.c).setVideoURI(Uri.parse(this.a));
      IGPFreemiumActivity.access$400(this.e.c).requestFocus();
      IGPFreemiumActivity.access$400(this.e.c).setOnPreparedListener((android.media.MediaPlayer.OnPreparedListener)new com.gameloft.android.GAND.GloftGGSS.bi(this, v2));
      IGPFreemiumActivity.access$400(this.e.c).setOnErrorListener((android.media.MediaPlayer.OnErrorListener)new com.gameloft.android.GAND.GloftGGSS.bj(this, v2));
      IGPFreemiumActivity.access$400(this.e.c).setOnCompletionListener((android.media.MediaPlayer.OnCompletionListener)new com.gameloft.android.GAND.GloftGGSS.bk(this, v2));
      IGPFreemiumActivity.access$400(this.e.c).setOnKeyListener((android.view.View.OnKeyListener)new com.gameloft.android.GAND.GloftGGSS.bl(this));
      if ( this.d != null )
      {
        v3 = new android.widget.ImageButton(this.e.a);
        v3.setImageBitmap(this.d);
        v3.setBackgroundColor(0);
        v3.setScaleType(ImageView.ScaleType.FIT_XY);
        v3.setPadding(0, 0, 0, 0);
        v4 = TypedValue.applyDimension(1, 70.0f, this.e.c.getResources().getDisplayMetrics());
        v5 = new android.widget.RelativeLayout.LayoutParams((int)v4, (int)v4);
        v5.addRule(10);
        v5.addRule(11);
        IGPFreemiumActivity.access$700(this.e.c).addView(v3, v5);
        v3.setOnTouchListener((android.view.View.OnTouchListener)new com.gameloft.android.GAND.GloftGGSS.bm(this));
      }
    }

}
