// Decompiled from classes.dex (SourceFile: MotionEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public final class MotionEvent extends com.bda.controller.BaseEvent implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    final android.util.SparseArray i;
    final android.util.SparseArray j;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.bda.controller.MotionEvent$ParcelableCreator();
    }

    private MotionEvent(long p0, int p2, float p3, float p4, float p5, float p6, float p7, float p8)
    {
      super(p0, p2);
      this.i = new android.util.SparseArray(4);
      this.i.put(0, Float.valueOf(p3));
      this.i.put(1, Float.valueOf(p4));
      this.i.put(11, Float.valueOf(p5));
      this.i.put(14, Float.valueOf(p6));
      this.j = new android.util.SparseArray(2);
      this.j.put(0, Float.valueOf(p7));
      this.j.put(1, Float.valueOf(p8));
    }

    private MotionEvent(long p0, int p2, int[] p3, float[] p4, int[] p5, float[] p6)
    {
      super(p0, p2);
      int v7;
      int v8;
      int i;
      int v10;
      v7 = 0;
      v8 = p3.length;
      this.i = new android.util.SparseArray(v8);
      for ( i = 0; i < v8; ++i )
        this.i.put(p3[i], Float.valueOf(p4[i]));
      v10 = p5.length;
      this.j = new android.util.SparseArray(v10);
      while ( v7 < v10 )
      {
        this.j.put(p5[v7], Float.valueOf(p6[v7]));
        ++v7;
      }
    
    }

    MotionEvent(android.os.Parcel p0)
    {
      super(p0);
      int v2;
      int Int;
      int i;
      v2 = 0;
      Int = p0.readInt();
      this.i = new android.util.SparseArray(Int);
      for ( i = 0; i < Int; ++i )
        this.i.put(p0.readInt(), Float.valueOf(p0.readFloat()));
      this.j = new android.util.SparseArray(p0.readInt());
      while ( v2 < Int )
      {
        this.j.put(p0.readInt(), Float.valueOf(p0.readFloat()));
        ++v2;
      }
    
    }

    private float a(int p0, int p1)
    {
      float v3;
      v3 = 0.0f;
      if ( p1 == 0 )
        return ((Float)this.i.get(p0, Float.valueOf(0.0f))).floatValue();
      return v3;
    }

    private float b()
    {
      return this.a(0, 0);
    }

    private float b(int p0)
    {
      return this.a(0, p0);
    }

    private float c()
    {
      return this.a(1, 0);
    }

    private float c(int p0)
    {
      return this.a(1, p0);
    }

    private float d()
    {
      return this.a(0, 0);
    }

    private float e()
    {
      return ((Float)this.j.get(0, Float.valueOf(0.0f))).floatValue();
    }

    private float f()
    {
      return this.a(1, 0);
    }

    private static int findPointerIndex$134621()
    {
      return -1;
    }

    private float g()
    {
      return ((Float)this.j.get(1, Float.valueOf(0.0f))).floatValue();
    }

    private static int getPointerCount()
    {
      return 1;
    }

    private static int getPointerId$134621()
    {
      return 0;
    }

    public final float a(int p0)
    {
      return this.a(p0, 0);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      int v3;
      int v4;
      int i;
      int v6;
      v3 = 0;
      super.writeToParcel(p0, p1);
      v4 = this.i.size();
      p0.writeInt(v4);
      for ( i = 0; i < v4; ++i )
      {
        p0.writeInt(this.i.keyAt(i));
        p0.writeFloat(((Float)this.i.valueAt(i)).floatValue());
      }
      v6 = this.j.size();
      p0.writeInt(v6);
      while ( v3 < v6 )
      {
        p0.writeInt(this.j.keyAt(v3));
        p0.writeFloat(((Float)this.j.valueAt(v3++)).floatValue());
      }
    }

}
