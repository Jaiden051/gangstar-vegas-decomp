// Decompiled from classes.dex (SourceFile: PlacePickerFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.os.Looper;
import android.text.TextUtils;
import com.facebook.AppEventsLogger;
import com.facebook.Request;
import com.facebook.internal.Utility;
import com.gameloft.android.GAND.GloftGGSS.R$styleable;
import java.util.Arrays;
public class PlacePickerFragment extends com.facebook.widget.PickerFragment {
    // Fields
    private static java.lang.String CATEGORY;
    public static int DEFAULT_RADIUS_IN_METERS;
    public static int DEFAULT_RESULTS_LIMIT;
    private static java.lang.String ID;
    private static java.lang.String LOCATION;
    public static java.lang.String LOCATION_BUNDLE_KEY;
    private static java.lang.String NAME;
    public static java.lang.String RADIUS_IN_METERS_BUNDLE_KEY;
    public static java.lang.String RESULTS_LIMIT_BUNDLE_KEY;
    public static java.lang.String SEARCH_TEXT_BUNDLE_KEY;
    public static java.lang.String SHOW_SEARCH_BOX_BUNDLE_KEY;
    private static java.lang.String TAG;
    private static java.lang.String WERE_HERE_COUNT;
    private static int searchTextTimerDelayInMilliseconds;
    private boolean hasSearchTextChangedSinceLastQuery;
    private android.location.Location location;
    private int radiusInMeters;
    private int resultsLimit;
    private android.widget.EditText searchBox;
    private java.lang.String searchText;
    private java.util.Timer searchTextTimer;
    private boolean showSearchBox;

    // Methods
    public PlacePickerFragment()
    {
      this(null);
    }

    public PlacePickerFragment(android.os.Bundle p0)
    {
      super(com.facebook.model.GraphPlace.class, 2130903051, p0);
      this.radiusInMeters = 1000;
      this.resultsLimit = 100;
      this.showSearchBox = true;
      this.setPlacePickerSettingsFromBundle(p0);
    }

    /* synthetic */ static void access$200(com.facebook.widget.PlacePickerFragment p0)
    {
      p0.onSearchTextTimerTriggered();
    }

    private com.facebook.Request createRequest(
            android.location.Location p0,
            int p1,
            int p2,
            String p3,
            java.util.Set<String> p4,
            com.facebook.Session p5)
    {
      com.facebook.Request v7;
      java.util.Set v8;
      String[] v9;
      String PictureFieldSpecifier; // RETVAL
      android.os.Bundle Parameters;
      v7 = Request.newPlacesSearchRequest(p5, p0, p1, p2, p3, null);
      v8 = new java.util.HashSet(p4);
      v9 = new String[5];
      v9[0] = "id";
      v9[1] = "name";
      v9[2] = "location";
      v9[3] = "category";
      v9[4] = "were_here_count";
      v8.addAll(Arrays.asList(v9));
      PictureFieldSpecifier = this.adapter.getPictureFieldSpecifier();
      if ( PictureFieldSpecifier != null )
        v8.add(PictureFieldSpecifier);
      Parameters = v7.getParameters();
      Parameters.putString("fields", TextUtils.join(",", v8));
      v7.setParameters(Parameters);
      return v7;
    }

    private java.util.Timer createSearchTextTimer()
    {
      java.util.Timer v1;
      v1 = new java.util.Timer();
      v1.schedule(new com.facebook.widget.PlacePickerFragment$2(this), 0, 2000);
      return v1;
    }

    private void onSearchTextTimerTriggered()
    {
      if ( this.hasSearchTextChangedSinceLastQuery )
      {
        new android.os.Handler(Looper.getMainLooper()).post((Runnable)new com.facebook.widget.PlacePickerFragment$3(this));
      }
      else
      {
        this.searchTextTimer.cancel();
        this.searchTextTimer = null;
      }
    }

    private void setPlacePickerSettingsFromBundle(android.os.Bundle p0)
    {
      if ( p0 != null )
      {
        this.setRadiusInMeters(p0.getInt("com.facebook.widget.PlacePickerFragment.RadiusInMeters", this.radiusInMeters));
        this.setResultsLimit(p0.getInt("com.facebook.widget.PlacePickerFragment.ResultsLimit", this.resultsLimit));
        if ( p0.containsKey("com.facebook.widget.PlacePickerFragment.SearchText") )
          this.setSearchText(p0.getString("com.facebook.widget.PlacePickerFragment.SearchText"));
        if ( p0.containsKey("com.facebook.widget.PlacePickerFragment.Location") )
          this.setLocation((android.location.Location)p0.getParcelable("com.facebook.widget.PlacePickerFragment.Location"));
        this.showSearchBox = p0.getBoolean("com.facebook.widget.PlacePickerFragment.ShowSearchBox", this.showSearchBox);
      }
    }

    com.facebook.widget.PickerFragment$PickerFragmentAdapter<com.facebook.model.GraphPlace> createAdapter()
    {
      com.facebook.widget.PlacePickerFragment$1 v1;
      v1 = new com.facebook.widget.PlacePickerFragment$1(this, this.getActivity());
      v1.setShowCheckbox(false);
      v1.setShowPicture(this.getShowPictures());
      return v1;
    }

    com.facebook.widget.PickerFragment$LoadingStrategy createLoadingStrategy()
    {
      return new com.facebook.widget.PlacePickerFragment$AsNeededLoadingStrategy(this, null);
    }

    com.facebook.widget.PickerFragment$SelectionStrategy createSelectionStrategy()
    {
      return new com.facebook.widget.PickerFragment$SingleSelectionStrategy(this);
    }

    String getDefaultTitleText()
    {
      return this.getString(2131165513);
    }

    public android.location.Location getLocation()
    {
      return this.location;
    }

    public int getRadiusInMeters()
    {
      return this.radiusInMeters;
    }

    com.facebook.Request getRequestForLoadData(com.facebook.Session p0)
    {
      return this.createRequest(this.location, this.radiusInMeters, this.resultsLimit, this.searchText, this.extraFields, p0);
    }

    public int getResultsLimit()
    {
      return this.resultsLimit;
    }

    public String getSearchText()
    {
      return this.searchText;
    }

    public com.facebook.model.GraphPlace getSelection()
    {
      java.util.List SelectedGraphObjects; // RETVAL
      java.util.Collection v2;
      SelectedGraphObjects = this.getSelectedGraphObjects();
      v2 = SelectedGraphObjects;
      if ( SelectedGraphObjects == null || SelectedGraphObjects.isEmpty() )
        return null;
      else
        return (com.facebook.model.GraphPlace)v2.iterator().next();
    }

    void logAppEvents(boolean p0)
    {
      com.facebook.AppEventsLogger v2;
      android.os.Bundle v3;
      String v4;
      v2 = AppEventsLogger.newLogger(this.getActivity(), this.getSession());
      v3 = new android.os.Bundle();
      if ( p0 )
        v4 = "Completed";
      else
        v4 = "Unknown";
      v3.putString("fb_dialog_outcome", v4);
      v3.putInt("num_places_picked", com.gameloft.android.DecompRT.b2i(this.getSelection() != null));
      v2.logSdkEvent("fb_place_picker_usage", null, v3);
    }

    public void onAttach(android.app.Activity p0)
    {
      super.onAttach(p0);
      if ( this.searchBox != null )
        ((android.view.inputmethod.InputMethodManager)this.getActivity().getSystemService("input_method")).showSoftInput(this.searchBox, 1);
    }

    public void onDetach()
    {
      super.onDetach();
      if ( this.searchBox != null )
        ((android.view.inputmethod.InputMethodManager)this.getActivity().getSystemService("input_method")).hideSoftInputFromWindow(this.searchBox.getWindowToken(), 0);
    }

    public void onInflate(android.app.Activity p0, android.util.AttributeSet p1, android.os.Bundle p2)
    {
      android.content.res.TypedArray v4;
      super.onInflate(p0, p1, p2);
      v4 = p0.obtainStyledAttributes(p1, R$styleable.af);
      this.setRadiusInMeters(v4.getInt(0, this.radiusInMeters));
      this.setResultsLimit(v4.getInt(1, this.resultsLimit));
      if ( v4.hasValue(1) )
        this.setSearchText(v4.getString(2));
      this.showSearchBox = v4.getBoolean(3, this.showSearchBox);
      v4.recycle();
    }

    void onLoadingData()
    {
      this.hasSearchTextChangedSinceLastQuery = false;
    }

    public void onSearchBoxTextChanged(String p0, boolean p1)
    {
      if ( p1 || !Utility.stringsEqualOrEmpty(this.searchText, p0) )
      {
        if ( TextUtils.isEmpty(p0) )
          p0 = null;
        this.searchText = p0;
        this.hasSearchTextChangedSinceLastQuery = true;
        if ( this.searchTextTimer == null )
          this.searchTextTimer = this.createSearchTextTimer();
      }
    }

    void saveSettingsToBundle(android.os.Bundle p0)
    {
      super.saveSettingsToBundle(p0);
      p0.putInt("com.facebook.widget.PlacePickerFragment.RadiusInMeters", this.radiusInMeters);
      p0.putInt("com.facebook.widget.PlacePickerFragment.ResultsLimit", this.resultsLimit);
      p0.putString("com.facebook.widget.PlacePickerFragment.SearchText", this.searchText);
      p0.putParcelable("com.facebook.widget.PlacePickerFragment.Location", this.location);
      p0.putBoolean("com.facebook.widget.PlacePickerFragment.ShowSearchBox", this.showSearchBox);
    }

    public void setLocation(android.location.Location p0)
    {
      this.location = p0;
    }

    public void setRadiusInMeters(int p0)
    {
      this.radiusInMeters = p0;
    }

    public void setResultsLimit(int p0)
    {
      this.resultsLimit = p0;
    }

    public void setSearchText(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        p0 = null;
      this.searchText = p0;
      if ( this.searchBox != null )
        this.searchBox.setText(p0);
    }

    public void setSettingsFromBundle(android.os.Bundle p0)
    {
      super.setSettingsFromBundle(p0);
      this.setPlacePickerSettingsFromBundle(p0);
    }

    void setupViews(android.view.ViewGroup p0)
    {
      android.widget.ListView v2;
      if ( this.showSearchBox )
      {
        v2 = (android.widget.ListView)p0.findViewById(2131427365);
        v2.addHeaderView(this.getActivity().getLayoutInflater().inflate(8, v2, false), null, false);
        this.searchBox = (android.widget.EditText)p0.findViewById(2131427384);
        this.searchBox.addTextChangedListener((android.text.TextWatcher)new com.facebook.widget.PlacePickerFragment$SearchTextWatcher(this, null));
        if ( !TextUtils.isEmpty(this.searchText) )
          this.searchBox.setText(this.searchText);
      }
    }

}
