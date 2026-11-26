// Decompiled from classes.dex (SourceFile: PickerFragment$LoadingStrategy$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PickerFragment$LoadingStrategy$1<T> implements android.support.v4.app.af<com.facebook.widget.SimpleGraphObjectCursor<T>> {
    // Fields
    final com.facebook.widget.PickerFragment$LoadingStrategy this$1;

    // Methods
    PickerFragment$LoadingStrategy$1(com.facebook.widget.PickerFragment$LoadingStrategy p0)
    {
      super();
      this.this$1 = p0;
    
    }

    public android.support.v4.content.Loader<com.facebook.widget.SimpleGraphObjectCursor<T>> onCreateLoader(
            int p0,
            android.os.Bundle p1)
    {
      return this.this$1.onCreateLoader();
    }

    public void onLoadFinished(
            android.support.v4.content.Loader<com.facebook.widget.SimpleGraphObjectCursor<T>> p0,
            com.facebook.widget.SimpleGraphObjectCursor<T> p1)
    {
      if ( p0 != this.this$1.loader )
        throw new com.facebook.FacebookException("Received callback for unknown loader.");
      this.this$1.onLoadFinished((com.facebook.widget.GraphObjectPagingLoader)p0, p1);
    }



    public void onLoaderReset(
            android.support.v4.content.Loader<com.facebook.widget.SimpleGraphObjectCursor<T>> p0)
    {
      if ( p0 != this.this$1.loader )
        throw new com.facebook.FacebookException("Received callback for unknown loader.");
      this.this$1.onLoadReset((com.facebook.widget.GraphObjectPagingLoader)p0);
    }

}
