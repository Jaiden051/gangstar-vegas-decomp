// Decompiled from classes.dex (SourceFile: FriendPickerFragment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.text.TextUtils;
import com.facebook.AppEventsLogger;
import com.facebook.Request;
import com.gameloft.android.GAND.GloftGGSS.R$styleable;
import java.util.Arrays;
public class FriendPickerFragment extends com.facebook.widget.PickerFragment {
    // Fields
    public static java.lang.String FRIEND_PICKER_TYPE_KEY;
    private static java.lang.String ID;
    public static java.lang.String MULTI_SELECT_BUNDLE_KEY;
    private static java.lang.String NAME;
    public static java.lang.String USER_ID_BUNDLE_KEY;
    private com.facebook.widget.FriendPickerFragment$FriendPickerType friendPickerType;
    private boolean multiSelect;
    private java.util.List preSelectedFriendIds;
    private java.lang.String userId;

    // Methods
    public FriendPickerFragment()
    {
      this(null);
    }

    public FriendPickerFragment(android.os.Bundle p0)
    {
      super(com.facebook.model.GraphUser.class, 1, p0);
      this.multiSelect = true;
      this.friendPickerType = FriendPickerFragment$FriendPickerType.FRIENDS;
      this.preSelectedFriendIds = new java.util.ArrayList();
      this.setFriendPickerSettingsFromBundle(p0);
    }

    /* synthetic */ static com.facebook.widget.FriendPickerFragment$FriendPickerType access$100(
            com.facebook.widget.FriendPickerFragment p0)
    {
      return p0.friendPickerType;
    }

    private com.facebook.Request createRequest(
            String p0,
            java.util.Set<String> p1,
            com.facebook.Session p2)
    {
      com.facebook.Request v4;
      java.util.Set v5;
      String[] v6;
      String PictureFieldSpecifier; // RETVAL
      android.os.Bundle Parameters;
      v4 = Request.newGraphPathRequest(p2, p0 + this.friendPickerType.getRequestPath(), null);
      v5 = new java.util.HashSet(p1);
      v6 = new String[2];
      v6[0] = "id";
      v6[1] = "name";
      v5.addAll(Arrays.asList(v6));
      PictureFieldSpecifier = this.adapter.getPictureFieldSpecifier();
      if ( PictureFieldSpecifier != null )
        v5.add(PictureFieldSpecifier);
      Parameters = v4.getParameters();
      Parameters.putString("fields", TextUtils.join(",", v5));
      v4.setParameters(Parameters);
      return v4;
    }

    private void setFriendPickerSettingsFromBundle(android.os.Bundle p0)
    {
      if ( p0 != null )
      {
        if ( p0.containsKey("com.facebook.widget.FriendPickerFragment.UserId") )
          this.setUserId(p0.getString("com.facebook.widget.FriendPickerFragment.UserId"));
        this.setMultiSelect(p0.getBoolean("com.facebook.widget.FriendPickerFragment.MultiSelect", this.multiSelect));
        if ( p0.containsKey("com.facebook.widget.FriendPickerFragment$FriendPickerType") )
        {
          try
          {
            this.friendPickerType = FriendPickerFragment$FriendPickerType.valueOf(p0.getString("com.facebook.widget.FriendPic" +
                                                                                               "kerFragment.FriendPickerType"));
          }
          catch ( Exception e )
          {
          }
        }
      }
    }

    com.facebook.widget.PickerFragment$PickerFragmentAdapter<com.facebook.model.GraphUser> createAdapter()
    {
      com.facebook.widget.FriendPickerFragment$1 v1;
      String[] v2;
      v1 = new com.facebook.widget.FriendPickerFragment$1(this, this.getActivity());
      v1.setShowCheckbox(true);
      v1.setShowPicture(this.getShowPictures());
      v2 = new String[1];
      v2[0] = "name";
      v1.setSortFields(Arrays.asList(v2));
      v1.setGroupByField("name");
      return v1;
    }

    com.facebook.widget.PickerFragment$LoadingStrategy createLoadingStrategy()
    {
      return new com.facebook.widget.FriendPickerFragment$ImmediateLoadingStrategy(this, null);
    }

    com.facebook.widget.PickerFragment$SelectionStrategy createSelectionStrategy()
    {
      if ( this.multiSelect )
        return new com.facebook.widget.PickerFragment$MultiSelectionStrategy(this);
      else
        return new com.facebook.widget.PickerFragment$SingleSelectionStrategy(this);
    }

    String getDefaultTitleText()
    {
      return this.getString(2131165512);
    }

    public boolean getMultiSelect()
    {
      return this.multiSelect;
    }

    com.facebook.Request getRequestForLoadData(com.facebook.Session p0)
    {
      String userId;
      if ( this.adapter == null )
        throw new com.facebook.FacebookException("Can't issue requests until Fragment has been created.");
      if ( this.userId != null )
        userId = this.userId;
      else
        userId = "me";
      return this.createRequest(userId, this.extraFields, p0);
    }

    public java.util.List<com.facebook.model.GraphUser> getSelection()
    {
      return this.getSelectedGraphObjects();
    }

    public String getUserId()
    {
      return this.userId;
    }

    public void loadData(boolean p0)
    {
      super.loadData(p0);
      this.setSelectedGraphObjects(this.preSelectedFriendIds);
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
      v3.putInt("num_friends_picked", this.getSelection().size());
      v2.logSdkEvent("fb_friend_picker_usage", null, v3);
    }

    public void onInflate(android.app.Activity p0, android.util.AttributeSet p1, android.os.Bundle p2)
    {
      android.content.res.TypedArray v4;
      super.onInflate(p0, p1, p2);
      v4 = p0.obtainStyledAttributes(p1, R$styleable.K);
      this.setMultiSelect(v4.getBoolean(0, this.multiSelect));
      v4.recycle();
    }

    void saveSettingsToBundle(android.os.Bundle p0)
    {
      super.saveSettingsToBundle(p0);
      p0.putString("com.facebook.widget.FriendPickerFragment.UserId", this.userId);
      p0.putBoolean("com.facebook.widget.FriendPickerFragment.MultiSelect", this.multiSelect);
    }

    public void setFriendPickerType(com.facebook.widget.FriendPickerFragment$FriendPickerType p0)
    {
      this.friendPickerType = p0;
    }

    public void setMultiSelect(boolean p0)
    {
      if ( this.multiSelect != p0 )
      {
        this.multiSelect = p0;
        this.setSelectionStrategy(this.createSelectionStrategy());
      }
    }

    public void setSelection(java.util.List<com.facebook.model.GraphUser> p0)
    {
      java.util.List v2;
      java.util.Iterator i;
      v2 = new java.util.ArrayList();
      for ( i = p0.iterator(); i.hasNext(); v2.add(((com.facebook.model.GraphUser)i.next()).getId()) )
        ;
      this.setSelectionByIds(v2);
    }

    public void setSelection(com.facebook.model.GraphUser[] p0)
    {
      this.setSelection(Arrays.asList(p0));
    }

    public void setSelectionByIds(java.util.List<String> p0)
    {
      this.preSelectedFriendIds.addAll(p0);
    }

    public void setSelectionByIds(String[] p0)
    {
      this.setSelectionByIds(Arrays.asList(p0));
    }

    public void setSettingsFromBundle(android.os.Bundle p0)
    {
      super.setSettingsFromBundle(p0);
      this.setFriendPickerSettingsFromBundle(p0);
    }

    public void setUserId(String p0)
    {
      this.userId = p0;
    }

}
