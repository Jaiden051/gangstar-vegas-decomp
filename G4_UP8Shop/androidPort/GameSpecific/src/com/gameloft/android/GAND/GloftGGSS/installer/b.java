// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class b implements java.lang.Runnable {
    // Fields
    final int a;
    final int b;
    final android.content.Context c;
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller d;

    // Methods
    b(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0, int p1, int p2, android.content.Context p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    public final void run()
    {
      java.util.Iterator i;
      Object[] v2;
      Object[] v3;
      Object[] v4;
      Object[] v5;
      Object[] v6;
      Object[] v7;
      Object[] v8;
      Object[] v9;
      Object[] v10;
      Object[] v11;
      Object[] v12;
      long h;
      long g;
      long v15;
      int v16;
      Object[] v17;
      Object[] v18;
      Object[] v19;
      Object[] v20;
      Object[] v21;
      Object[] v22;
      Object[] v23;
      Object[] v24;
      Object[] v25;
      Object[] v26;
      Object[] v27;
      android.widget.TextView v28;
      Object[] v29;
      StringBuilder v30;
      Object[] v31;
      Object[] v32;
      Object[] v33;
      android.widget.TextView v34;
      Object[] v35;
      Object[] v36;
      Object[] v37;
      Object[] v38;
      Object[] v39;
      Object[] v40;
      Object[] v41;
      Object[] v42;
      Object[] v43;
      Object[] v44;
      Object[] v45;
      android.widget.TextView v46;
      Object[] v47;
      Object[] v48;
      Object[] v49;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            try
            {
            GameInstaller.access$402(this.d, this.a);
            this.d.setContentView(this.a);
            if ( this.b != GameInstaller.access$500(this.d) )
            {
            GameInstaller.access$602(this.d, GameInstaller.access$500(this.d));
            GameInstaller.access$502(this.d, this.b);
            }
            switch ( this.b )
            {
            case 0:
            GameInstaller.access$700(this.d, 2131427403, false);
            GameInstaller.access$700(this.d, 2131427399, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            v2 = new Object[1];
            v2[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165328, v2));
            { _pc = 1; continue _sm; }
            case 1:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            if ( GameInstaller.access$900(this.d) == 2 )
            {
            v27 = new Object[1];
            v27[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165300, v27));
            }
            else
            {
            v28 = (android.widget.TextView)this.d.findViewById(2131427396);
            v29 = new Object[1];
            v29[0] = this.c;
            v30 = new StringBuilder().append(this.d.getString(2131165299, v29)).append("\n");
            v31 = new Object[1];
            v31[0] = this.c;
            v28.setText(v30.append(this.d.getString(2131165301, v31)).toString());
            }
            { _pc = 1; continue _sm; }
            case 2:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            v46 = (android.widget.TextView)this.d.findViewById(2131427396);
            v47 = new Object[1];
            v47[0] = this.c;
            v46.setText(this.d.getString(2131165318, v47));
            if ( GameInstaller.access$1200(this.d) != null && GameInstaller.access$1200(this.d).x )
            {
            v48 = new Object[1];
            v48[0] = this.c;
            v46.setText(this.d.getString(2131165319, v48));
            }
            { _pc = 1; continue _sm; }
            case 3:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            v22 = new Object[1];
            v22[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165282, v22));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            v23 = new Object[1];
            v23[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427401)).setText(this.d.getString(2131165283, v23));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427403));
            v24 = new Object[1];
            v24[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427403)).setText(this.d.getString(2131165284, v24));
            v25 = new Object[1];
            v25[0] = this.c;
            if ( GameInstaller.access$900(this.d) == 2 )
            {
            ((android.widget.Button)this.d.findViewById(2131427401)).setText(this.d.getString(2131165327, v25));
            v26 = new Object[1];
            v26[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165298, v26));
            }
            else
            {
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165296, v25));
            }
            { _pc = 1; continue _sm; }
            case 4:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            v41 = new Object[1];
            v41[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165281, v41));
            GameInstaller.access$700(this.d, 2131427401, false);
            GameInstaller.access$700(this.d, 2131427403, false);
            if ( GameInstaller.access$900(this.d) == 1 || GameInstaller.access$600(this.d) == 28 )
            {
            v42 = new Object[1];
            v42[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165324, v42));
            }
            else
            {
            v43 = new Object[1];
            v43[0] = this.c;
            if ( GameInstaller.access$900(this.d) == 2 )
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165304, v43));
            else
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165303, v43));
            }
            if ( this.b != GameInstaller.access$500(this.d) )
            this.d.c();
            { _pc = 1; continue _sm; }
            case 5:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427403));
            GameInstaller.access$700(this.d, 2131427399, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            ((android.widget.ProgressBar)this.d.findViewById(2131427407)).setMax((int)(this.d.j / 1024 + 1));
            v33 = new Object[1];
            v33[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165305, v33));
            v34 = (android.widget.TextView)this.d.findViewById(2131427408);
            v34.setVisibility(4);
            if ( GameInstaller.access$900(this.d) == 1 )
            {
            v35 = new Object[1];
            v35[0] = this.c;
            v34.setText(this.d.getString(2131165311, v35));
            }
            else if ( GameInstaller.access$1100(this.d) == 1 )
            {
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.a(2131165311, null, "" + (int)((GameInstaller.m_iRealRequiredSize >> 20) + 1)));
            }
            else
            {
            this.d.findViewById(2131427396);
            }
            { _pc = 1; continue _sm; }
            case 7:
            case 28:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            v40 = new Object[1];
            v40[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165315, v40));
            { _pc = 1; continue _sm; }
            case 8:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            v39 = new Object[1];
            v39[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165314, v39));
            { _pc = 1; continue _sm; }
            case 9:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            v3 = new Object[1];
            v3[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165293, v3));
            GameInstaller.access$800(this.d, 2131427412, false);
            if ( GameInstaller.access$900(this.d) == 1 )
            {
            v4 = new Object[1];
            v4[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427401)).setText(this.d.getString(2131165322, v4));
            v5 = new Object[1];
            v5[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165323, v5));
            }
            else if ( GameInstaller.access$900(this.d) != 0 )
            {
            if ( GameInstaller.access$900(this.d) == 2 )
            {
            v8 = new Object[1];
            v8[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427401)).setText(this.d.getString(2131165327, v8));
            v9 = new Object[1];
            v9[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165294, v9));
            v10 = new Object[1];
            v10[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165325, v10));
            }
            }
            else
            {
            v6 = new Object[1];
            v6[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427401)).setText(this.d.getString(2131165326, v6));
            v7 = new Object[1];
            v7[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165325, v7));
            }
            { _pc = 1; continue _sm; }
            case 10:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.a(2131165292, null, "" + (int)((GameInstaller.m_iRealRequiredSize >> 20) + 1)));
            { _pc = 1; continue _sm; }
            case 13:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            v11 = new Object[1];
            v11[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165281, v11));
            GameInstaller.access$700(this.d, 2131427403, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.a(GameInstaller.access$1000(this.d), "{GAME_NAME}", this.d.getString(2131165524)));
            { _pc = 1; continue _sm; }
            case 16:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            v32 = new Object[1];
            v32[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165302, v32));
            { _pc = 1; continue _sm; }
            case 17:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            GameInstaller.access$700(this.d, 2131427403, false);
            v49 = new Object[1];
            v49[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165320, v49));
            { _pc = 1; continue _sm; }
            case 18:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            v12 = new Object[1];
            v12[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165281, v12));
            GameInstaller.access$700(this.d, 2131427403, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            h = this.d.h;
            g = this.d.g;
            if ( !this.d.a(0) )
            h -= g;
            v15 = h;
            if ( this.d.a(0) )
            v16 = 2131165290;
            else
            v16 = 2131165289;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.a(v16, null, "" + v15));
            { _pc = 1; continue _sm; }
            case 19:
            GameInstaller.access$700(this.d, 2131427403, false);
            GameInstaller.access$700(this.d, 2131427399, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            v17 = new Object[1];
            v17[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165316, v17));
            { _pc = 1; continue _sm; }
            case 20:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427403));
            GameInstaller.access$700(this.d, 2131427399, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            v18 = new Object[1];
            v18[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165295, v18));
            { _pc = 1; continue _sm; }
            case 21:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            v37 = new Object[1];
            v37[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165281, v37));
            GameInstaller.access$700(this.d, 2131427403, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            GameInstaller.access$800(this.d, 2131427412, false);
            v38 = new Object[1];
            v38[0] = this.c;
            if ( this.d.aq == 29 )
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165317, v38));
            else
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165312, v38));
            { _pc = 1; continue _sm; }
            case 22:
            if ( this.d.aq == 41 )
            ((android.widget.ProgressBar)this.d.findViewById(2131427407)).setMax((int)(this.d.l + 1));
            GameInstaller.access$700(this.d, 2131427403, false);
            GameInstaller.access$700(this.d, 2131427399, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            v36 = new Object[1];
            v36[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165288, v36));
            { _pc = 1; continue _sm; }
            case 23:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            v19 = new Object[1];
            v19[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165281, v19));
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427401));
            v20 = new Object[1];
            v20[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427401)).setText(this.d.getString(2131165284, v20));
            GameInstaller.access$700(this.d, 2131427403, false);
            v21 = new Object[1];
            v21[0] = this.c;
            if ( GameInstaller.access$900(this.d) == 2 )
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165298, v21));
            else
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165297, v21));
            { _pc = 1; continue _sm; }
            case 27:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427403));
            GameInstaller.access$700(this.d, 2131427399, false);
            GameInstaller.access$700(this.d, 2131427401, false);
            ((android.widget.ProgressBar)this.d.findViewById(2131427407)).setMax((int)(this.d.j / 1024 + 1));
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(2131165287);
            ((android.widget.TextView)this.d.findViewById(2131427408)).setVisibility(4);
            { _pc = 1; continue _sm; }
            case 29:
            this.d.b().add((android.widget.Button)this.d.findViewById(2131427399));
            v44 = new Object[1];
            v44[0] = this.c;
            ((android.widget.Button)this.d.findViewById(2131427399)).setText(this.d.getString(2131165281, v44));
            GameInstaller.access$700(this.d, 2131427401, false);
            GameInstaller.access$700(this.d, 2131427403, false);
            v45 = new Object[1];
            v45[0] = this.c;
            ((android.widget.TextView)this.d.findViewById(2131427396)).setText(this.d.getString(2131165338, v45));
            { _pc = 1; continue _sm; }
            default:
            { _pc = 1; continue _sm; }
            }
            }
            catch ( Exception e )
            {
            GameInstaller.access$200(this.d, 21);
            return;
            }


          }
          case 1: {
            try
            {
            this.d.d();
            for ( i = this.d.b().iterator(); i.hasNext(); ((android.widget.Button)i.next()).setOnClickListener(this.d.bk) )
            ;
            }
            catch ( Exception e )
            {
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

}
