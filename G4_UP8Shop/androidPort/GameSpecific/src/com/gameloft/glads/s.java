// Decompiled from classes.dex (SourceFile: s.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.net.Uri;
import android.util.TypedValue;
import android.widget.ImageView;
final class s implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final java.lang.String c;
    final android.graphics.Bitmap d;
    final com.gameloft.glads.GLAdFullScreen$JSInterface e;

    // Methods
    s(com.gameloft.glads.GLAdFullScreen$JSInterface p0, String p1, String p2, String p3, android.graphics.Bitmap p4)
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
      android.widget.ImageButton v2;
      float v3; // RETVAL
      android.widget.RelativeLayout.LayoutParams v4;
      GLAdFullScreen.access$502(true);
      GLAdFullScreen.access$702(new android.widget.RelativeLayout(this.e.a));
      GLAdFullScreen.access$800().addView(GLAdFullScreen.access$700(), -1, -1);
      GLAdFullScreen.access$602(new android.widget.VideoView(this.e.a));
      v1 = new android.widget.RelativeLayout.LayoutParams(-1, -1);
      v1.addRule(13);
      GLAdFullScreen.access$700().addView(GLAdFullScreen.access$600(), v1);
      GLAdFullScreen.access$600().setMediaController(null);
      GLAdFullScreen.access$600().setVideoURI(Uri.parse(this.a));
      GLAdFullScreen.access$600().requestFocus();
      GLAdFullScreen.access$600().setOnPreparedListener((android.media.MediaPlayer.OnPreparedListener)new com.gameloft.glads.t(this));
      GLAdFullScreen.access$600().setOnErrorListener((android.media.MediaPlayer.OnErrorListener)new com.gameloft.glads.u(this));
      GLAdFullScreen.access$600().setOnCompletionListener((android.media.MediaPlayer.OnCompletionListener)new com.gameloft.glads.v(this));
      GLAdFullScreen.access$600().setOnKeyListener((android.view.View.OnKeyListener)new com.gameloft.glads.w(this));
      if ( this.d != null )
      {
        v2 = new android.widget.ImageButton(this.e.a);
        v2.setImageBitmap(this.d);
        v2.setBackgroundColor(0);
        v2.setScaleType(ImageView.ScaleType.FIT_XY);
        v2.setPadding(0, 0, 0, 0);
        v3 = TypedValue.applyDimension(1, 70.0f, this.e.a.getResources().getDisplayMetrics());
        v4 = new android.widget.RelativeLayout.LayoutParams((int)v3, (int)v3);
        v4.addRule(10);
        v4.addRule(11);
        GLAdFullScreen.access$700().addView(v2, v4);
        v2.setOnTouchListener((android.view.View.OnTouchListener)new com.gameloft.glads.x(this));
      }
    }

}
