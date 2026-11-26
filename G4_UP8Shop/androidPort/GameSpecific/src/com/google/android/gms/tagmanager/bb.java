// Decompiled from classes.dex (SourceFile: bb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class bb<K, V> implements com.google.android.gms.tagmanager.k<K, V> {
    // Fields
    private android.util.LruCache a;

    // Methods
    bb(int p0, com.google.android.gms.tagmanager.l$a<K, V> p1)
    {
      super();
      this.a = new com.google.android.gms.tagmanager.bb$1(this, p0, p1);
    }

    public final V a(K p0)
    {
      return (V)this.a.get(p0);
    }

    public final void a(K p0, V p1)
    {
      this.a.put(p0, p1);
    }

}
