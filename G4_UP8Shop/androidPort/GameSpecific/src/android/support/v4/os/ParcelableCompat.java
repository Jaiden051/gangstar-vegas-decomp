// Decompiled from classes.dex (SourceFile: ParcelableCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.os;

import android.os.Build;
public class ParcelableCompat {
    // Methods
    public ParcelableCompat()
    {
      super();
    }

    public static <T> android.os.Parcelable.Creator<T> newCreator(
            android.support.v4.os.ParcelableCompatCreatorCallbacks<T> p0)
    {
      if ( Build.VERSION.SDK_INT >= 13 )
        ParcelableCompatCreatorHoneycombMR2Stub.instantiate(p0);
      return (android.os.Parcelable.Creator)new android.support.v4.os.ParcelableCompat$CompatCreator(p0);
    }

}
