// Decompiled from classes.dex (SourceFile: ParcelableCompat$CompatCreator.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.os;

class ParcelableCompat$CompatCreator<T> implements android.os.Parcelable.Creator<T> {
    // Fields
    final android.support.v4.os.ParcelableCompatCreatorCallbacks mCallbacks;

    // Methods
    public ParcelableCompat$CompatCreator(android.support.v4.os.ParcelableCompatCreatorCallbacks<T> p0)
    {
      super();
      this.mCallbacks = p0;
    }

    public T createFromParcel(android.os.Parcel p0)
    {
      return (T)this.mCallbacks.createFromParcel(p0, null);
    }

    public T[] newArray(int p0)
    {
      return (T[])this.mCallbacks.newArray(p0);
    }

}
