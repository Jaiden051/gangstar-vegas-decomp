// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

final class i implements android.media.AudioManager.OnAudioFocusChangeListener {
    // Fields
    final android.support.v4.media.e a;

    // Methods
    i(android.support.v4.media.e p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onAudioFocusChange(int p0)
    {
      this.a.d.a(p0);
    }

}
