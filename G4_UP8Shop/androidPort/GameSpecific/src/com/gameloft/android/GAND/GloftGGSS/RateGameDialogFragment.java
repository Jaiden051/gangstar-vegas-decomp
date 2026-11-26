// Decompiled from classes.dex (SourceFile: RateGameDialogFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.graphics.Color;
import android.view.LayoutInflater;
public class RateGameDialogFragment extends android.support.v4.app.l {
    // Fields
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private int r;
    private int s;
    private int t;
    private android.app.AlertDialog u;

    // Methods
    public RateGameDialogFragment(String p0, String p1, String p2, String p3)
    {
      super();
      this.r = 0;
      this.s = 1;
      this.t = -1;
      this.n = p0;
      this.o = p2;
      this.q = p1;
      this.p = p3;
    }

    /* synthetic */ static int access$000(
            com.gameloft.android.GAND.GloftGGSS.RateGameDialogFragment p0)
    {
      return p0.r;
    }

    /* synthetic */ static android.app.AlertDialog access$100(
            com.gameloft.android.GAND.GloftGGSS.RateGameDialogFragment p0)
    {
      return p0.u;
    }

    /* synthetic */ static int access$200(
            com.gameloft.android.GAND.GloftGGSS.RateGameDialogFragment p0)
    {
      return p0.s;
    }

    /* synthetic */ static int access$300(
            com.gameloft.android.GAND.GloftGGSS.RateGameDialogFragment p0)
    {
      return p0.t;
    }

    public final android.app.Dialog a()
    {
      android.view.LayoutInflater LayoutInflater;
      android.app.AlertDialog.Builder v2;
      android.widget.Button v3;
      android.widget.Button v4;
      android.widget.Button v5;
      LayoutInflater = this.getActivity().getLayoutInflater();
      v2 = new android.app.AlertDialog.Builder(this.getActivity());
      v2.setMessage(this.n);
      v2.setView(LayoutInflater.inflate(2130903074, null));
      this.u = v2.create();
      this.u.show();
      v3 = (android.widget.Button)this.u.findViewById(2131427470);
      if ( v3 != null )
      {
        v3.setBackgroundDrawable(this.getResources().getDrawable(2130837637));
        v3.setTextColor(Color.parseColor("white"));
        v3.setText(this.o);
        v3.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.dg(this));
      }
      v4 = (android.widget.Button)this.u.findViewById(2131427469);
      if ( v4 != null )
      {
        v4.setBackgroundDrawable(this.getResources().getDrawable(2130837637));
        v4.setTextColor(Color.parseColor("white"));
        v4.setText(this.q);
        v4.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.dh(this));
      }
      v5 = (android.widget.Button)this.u.findViewById(2131427471);
      if ( v5 != null )
      {
        v5.setBackgroundDrawable(this.getResources().getDrawable(2130837637));
        v5.setTextColor(Color.parseColor("white"));
        v5.setText(this.p);
        v5.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.di(this));
      }
      return this.u;
    }

}
