// Decompiled from classes.dex (SourceFile: DataBufferAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.widget;

import android.util.Log;
import android.widget.TextView;
import java.util.Arrays;
public class DataBufferAdapter<T> extends android.widget.BaseAdapter {
    // Fields
    private final android.content.Context a;
    private final int b;
    private int c;
    private final int d;
    private final java.util.List e;
    private final android.view.LayoutInflater f;
    private boolean g;

    // Methods
    private DataBufferAdapter(android.content.Context p0, int p1)
    {
      this(p0, p1, 0, new java.util.ArrayList());
    }

    private DataBufferAdapter(android.content.Context p0, int p1, int p2)
    {
      this(p0, p1, p2, new java.util.ArrayList());
    }

    private DataBufferAdapter(
            android.content.Context p0,
            int p1,
            int p2,
            java.util.List<com.google.android.gms.common.data.DataBuffer<T>> p3)
    {
      super();
      this.g = true;
      this.a = p0;
      this.c = p1;
      this.b = p1;
      this.d = p2;
      this.e = p3;
      this.f = (android.view.LayoutInflater)p0.getSystemService("layout_inflater");
    }

    private DataBufferAdapter(
            android.content.Context p0,
            int p1,
            int p2,
            com.google.android.gms.common.data.DataBuffer<T>[] p3)
    {
      this(p0, p1, p2, Arrays.asList(p3));
    }

    private DataBufferAdapter(
            android.content.Context p0,
            int p1,
            java.util.List<com.google.android.gms.common.data.DataBuffer<T>> p2)
    {
      this(p0, p1, 0, p2);
    }

    private DataBufferAdapter(android.content.Context p0, int p1, com.google.android.gms.common.data.DataBuffer<T>[] p2)
    {
      this(p0, p1, 0, Arrays.asList(p2));
    }

    private android.view.View a(int p0, android.view.View p1, android.view.ViewGroup p2, int p3)
    {
      android.view.View v5; // RETVAL
      android.view.View v6;
      android.widget.TextView v7;
      Object Item; // RETVAL
    
      if ( p1 != null )
      {
        v6 = p1;
      }
      else
      {
        v5 = this.f.inflate(p3, p2, false);
        v6 = v5;
      }
      try
      {
        if ( this.d != 0 )
          v7 = (android.widget.TextView)v6.findViewById(this.d);
        else
          v7 = (android.widget.TextView)v6;
        Item = this.getItem(p0);
        if ( Item instanceof CharSequence )
          v7.setText((CharSequence)Item);
        else
          v7.setText(Item.toString());
        return v6;
      }
      catch ( ClassCastException v10 )
      {
        Log.e("DataBufferAdapter", "You must supply a resource ID for a TextView");
        throw new IllegalStateException("DataBufferAdapter requires the resource ID to be a TextView", v10);
      }
    }

    private void a()
    {
      java.util.Iterator i;
      for ( i = this.e.iterator(); i.hasNext(); ((com.google.android.gms.common.data.DataBuffer)i.next()).c() )
        ;
      this.e.clear();
      if ( this.g )
        this.notifyDataSetChanged();
    }

    private void a(int p0)
    {
      this.c = p0;
    }

    private void a(com.google.android.gms.common.data.DataBuffer<T> p0)
    {
      this.e.add(p0);
      if ( this.g )
        this.notifyDataSetChanged();
    }

    private void a(boolean p0)
    {
      this.g = p0;
    }

    private android.content.Context b()
    {
      return this.a;
    }

    public int getCount()
    {
      java.util.Iterator v1;
      int v2;
      v1 = this.e.iterator();
      v2 = 0;
      while ( v1.hasNext() )
        v2 += ((com.google.android.gms.common.data.DataBuffer)v1.next()).b();
      return v2;
    }

    public android.view.View getDropDownView(int p0, android.view.View p1, android.view.ViewGroup p2)
    {
      return this.a(p0, p1, p2, this.c);
    }

    public T getItem(int p0)
    {
      java.util.Iterator v2;
      int i;
      com.google.android.gms.common.data.DataBuffer v4;
      int v5; // RETVAL
    
      v2 = this.e.iterator();
      for ( i = p0; ; i -= v5 )
      {
        if ( !v2.hasNext() )
          throw new android.database.CursorIndexOutOfBoundsException(p0, this.getCount());
        v4 = (com.google.android.gms.common.data.DataBuffer)v2.next();
        v5 = v4.b();
        if ( v5 > i )
          break;
      }
      try
      {
        return (T)v4.b(i);
      }
      catch ( android.database.CursorIndexOutOfBoundsException e )
      {
        throw new android.database.CursorIndexOutOfBoundsException(p0, this.getCount());
      }
    }

    public long getItemId(int p0)
    {
      return p0;
    }

    public android.view.View getView(int p0, android.view.View p1, android.view.ViewGroup p2)
    {
      return this.a(p0, p1, p2, this.b);
    }

    public void notifyDataSetChanged()
    {
      super.notifyDataSetChanged();
      this.g = true;
    }

}
