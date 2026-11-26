// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import com.google.android.gms.common.GooglePlayServicesUtil;
public class d extends android.support.v4.app.Fragment implements android.content.DialogInterface.OnCancelListener, com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks, com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener {
    // Fields
    private com.google.android.gms.common.api.GoogleApiClient c;
    private com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener d;
    private com.google.android.gms.common.ConnectionResult e;
    private boolean f;

    // Methods
    public d()
    {
      super();
    }

    public final void a(int p0)
    {
      ;
    }

    public final void a(android.os.Bundle p0)
    {
      this.f = false;
    }

    public final void a(com.google.android.gms.common.ConnectionResult p0)
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      int v2;
      int v3;
      this.e = p0;
      if ( !this.f )
      {
        v2 = this.getActivity().c().f().indexOf(this);
        if ( p0.a() )
        {
          v3 = ((v2 + 1) << 16) + 1;
          try
          {
            p0.a(this.getActivity(), v3);
          }
          catch ( android.content.IntentSender.SendIntentException e )
          {
            this.c.b();
          }
        }
        else if ( GooglePlayServicesUtil.isUserRecoverableError(p0.c()) )
        {
          GooglePlayServicesUtil.b(
            p0.c(),
            this.getActivity(),
            this,
            2,
            (android.content.DialogInterface.OnCancelListener)this);
        }
        else
        {
          this.d.a(this.e);
        }
      }
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p1)
    {
      this.c = p0;
      this.c.a((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)this);
      this.d = p1;
      this.c.a((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)this);
      this.c.a((com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)this);
    }

    public final boolean a()
    {
      return this.c != null;
    }

    public void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
  try {
      int v4 = 0;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v4 = 1;
            _sw_1 = (p0);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            _pc = 3;
            continue _sm;
          case 1:
            if ( p1 != -1 )
            { _pc = 3; continue _sm; }
            _pc = 4;
            continue _sm;
          case 2:
            if ( GooglePlayServicesUtil.isGooglePlayServicesAvailable(this.getActivity()) != 0 )
            { _pc = 3; continue _sm; }
            _pc = 4;
            continue _sm;
          case 3:
            v4 = 0;
            _pc = 4;
            continue _sm;
          case 4:
            if ( v4 != 0 )
            {
            this.c.b();
            this.f = false;
            }
            else
            {
            this.d.a(this.e);
            }
            return;
        }
      }
  } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
}

    public void onCancel(android.content.DialogInterface p0)
    {
      try {
      this.f = false;
      this.d.a(this.e);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

    public void onCreate(android.os.Bundle p0)
    {
      int Int;
      super.onCreate(p0);
      if ( p0 != null )
      {
        this.f = p0.getBoolean("resolving_error", false);
        Int = p0.getInt("connection_result_status");
        if ( Int != 0 )
          this.e = new com.google.android.gms.common.ConnectionResult(Int, (android.app.PendingIntent)p0.getParcelable("resolution_pending_intent"));
      }
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      super.onSaveInstanceState(p0);
      p0.putBoolean("resolving_error", this.f);
      if ( this.e != null )
      {
        p0.putInt("connection_result_status", this.e.c());
        p0.putParcelable("resolution_pending_intent", this.e.d());
      }
    }

    public void onStart()
    {
      try {
      super.onStart();
      if ( !this.f && this.c != null )
        this.c.b();
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

    public void onStop()
    {
      try {
      super.onStop();
      if ( this.c != null )
        this.c.d();
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
