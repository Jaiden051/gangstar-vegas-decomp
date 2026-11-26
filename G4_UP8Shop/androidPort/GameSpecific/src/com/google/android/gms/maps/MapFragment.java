// Decompiled from classes.dex (SourceFile: MapFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

public class MapFragment extends android.app.Fragment {
    // Fields
    private final com.google.android.gms.maps.MapFragment$b a;
    private com.google.android.gms.maps.GoogleMap b;

    // Methods
    public MapFragment()
    {
      super();
      this.a = new com.google.android.gms.maps.MapFragment$b(this);
    }

    private com.google.android.gms.maps.internal.IMapFragmentDelegate a()
    {
      this.a.i();
      if ( this.a.a() != null )
        return ((com.google.android.gms.maps.MapFragment$a)this.a.a()).h();
      else
        return null;
    }

    private com.google.android.gms.maps.GoogleMap b()
    {
      com.google.android.gms.dynamic.LifecycleDelegate v1; // RETVAL
      com.google.android.gms.maps.internal.IMapFragmentDelegate v2;
      com.google.android.gms.maps.internal.IMapFragmentDelegate v5; // RETVAL
      com.google.android.gms.maps.internal.IGoogleMapDelegate v6; // RETVAL
      com.google.android.gms.maps.internal.IGoogleMapDelegate v7;
      this.a.i();
      v1 = this.a.a();
      if ( v1 != null )
      {
        v5 = ((com.google.android.gms.maps.MapFragment$a)this.a.a()).h();
        v2 = v5;
      }
      else
      {
        v2 = null;
      }
      if ( v2 == null )
        return null;
      try
      {
        v6 = v2.a();
      }
      catch ( android.os.RemoteException v8 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v8);
      }
      v7 = v6;
      if ( v6 == null )
        return null;
      if ( this.b == null || this.b.a().asBinder() != v6.asBinder() )
        this.b = new com.google.android.gms.maps.GoogleMap(v7);
      return this.b;
    }

    public static com.google.android.gms.maps.MapFragment newInstance()
    {
      return new com.google.android.gms.maps.MapFragment();
    }

    public static com.google.android.gms.maps.MapFragment newInstance(
            com.google.android.gms.maps.GoogleMapOptions p0)
    {
      com.google.android.gms.maps.MapFragment v1;
      android.os.Bundle v2;
      v1 = new com.google.android.gms.maps.MapFragment();
      v2 = new android.os.Bundle();
      v2.putParcelable("MapOptions", (android.os.Parcelable)p0);
      v1.setArguments(v2);
      return v1;
    }

    public void onActivityCreated(android.os.Bundle p0)
    {
      if ( p0 != null )
        p0.setClassLoader(com.google.android.gms.maps.MapFragment.class.getClassLoader());
      super.onActivityCreated(p0);
    }

    public void onAttach(android.app.Activity p0)
    {
      super.onAttach(p0);
      MapFragment$b.a(this.a, p0);
    }

    public void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.a.a(p0);
    }

    public android.view.View onCreateView(
            android.view.LayoutInflater p0,
            android.view.ViewGroup p1,
            android.os.Bundle p2)
    {
      return this.a.a(p0, p1, p2);
    }

    public void onDestroy()
    {
      this.a.g();
      super.onDestroy();
    }

    public void onDestroyView()
    {
      this.a.f();
      super.onDestroyView();
    }

    public void onInflate(android.app.Activity p0, android.util.AttributeSet p1, android.os.Bundle p2)
    {
      android.os.Bundle v4;
      super.onInflate(p0, p1, p2);
      MapFragment$b.a(this.a, p0);
      v4 = new android.os.Bundle();
      v4.putParcelable("MapOptions", (android.os.Parcelable)GoogleMapOptions.createFromAttributes(p0, p1));
      this.a.a(p0, v4, p2);
    }

    public void onLowMemory()
    {
      this.a.h();
      super.onLowMemory();
    }

    public void onPause()
    {
      this.a.d();
      super.onPause();
    }

    public void onResume()
    {
      super.onResume();
      this.a.c();
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      if ( p0 != null )
        p0.setClassLoader(com.google.android.gms.maps.MapFragment.class.getClassLoader());
      super.onSaveInstanceState(p0);
      this.a.b(p0);
    }

    public void setArguments(android.os.Bundle p0)
    {
      super.setArguments(p0);
    }

}
