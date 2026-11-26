// Decompiled from classes.dex (SourceFile: FacebookDialog$OpenGraphDialogBuilderBase.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.model.GraphObject$Factory;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import com.facebook.model.GraphObject;
abstract class FacebookDialog$OpenGraphDialogBuilderBase<CONCRETE extends com.facebook.widget.FacebookDialog$OpenGraphDialogBuilderBase<?>> extends com.facebook.widget.FacebookDialog$Builder<CONCRETE> {
    // Fields
    private com.facebook.model.OpenGraphAction action;
    private java.lang.String actionType;
    private boolean dataErrorsFatal;
    private java.lang.String previewPropertyName;

    // Methods
    public FacebookDialog$OpenGraphDialogBuilderBase(android.app.Activity p0, com.facebook.model.OpenGraphAction p1, String p2)
    {
      super(p0);
      Validate.notNull(p1, "action");
      Validate.notNullOrEmpty(p1.getType(), "action.getType()");
      Validate.notNullOrEmpty(p2, "previewPropertyName");
      if ( p1.getProperty(p2) == null )
        throw new IllegalArgumentException("A property named \""
                                         + p2
                                         + "\" was not found on the action.  The name of the preview property must match the " +
                                           "name of an action property.");
      this.action = p1;
      this.actionType = p1.getType();
      this.previewPropertyName = p2;
    }

    public FacebookDialog$OpenGraphDialogBuilderBase(android.app.Activity p0, com.facebook.model.OpenGraphAction p1, String p2, String p3)
    {
      super(p0);
      String Type;
      Validate.notNull(p1, "action");
      Validate.notNullOrEmpty(p2, "actionType");
      Validate.notNullOrEmpty(p3, "previewPropertyName");
      if ( p1.getProperty(p3) == null )
        throw new IllegalArgumentException("A property named \""
                                         + p3
                                         + "\" was not found on the action.  The name of the preview property must match the " +
                                           "name of an action property.");
      Type = p1.getType();
      if ( !Utility.isNullOrEmpty(Type) && !Type.equals(p2) )
        throw new IllegalArgumentException("'actionType' must match the type of 'action' if it is specified. Consider using O" +
                                           "penGraphDialogBuilderBase(Activity activity, OpenGraphAction action, String previ" +
                                           "ewPropertyName) instead.");
      this.action = p1;
      this.actionType = p2;
      this.previewPropertyName = p3;
    
    }

    private org.json.JSONObject flattenChildrenOfGraphObject(
            org.json.JSONObject p0)
    {
      org.json.JSONObject v2;
      java.util.Iterator v3;
      String v4;
      try
      {
        v2 = new org.json.JSONObject(p0.toString());
        v3 = v2.keys();
        while ( v3.hasNext() )
        {
          v4 = (String)v3.next();
          if ( !v4.equalsIgnoreCase("image") )
            v2.put(v4, this.flattenObject(v2.get(v4)));
        }
        return v2;
      }
      catch ( org.json.JSONException v5 )
      {
        throw new com.facebook.FacebookException(v5);
      }
    }

    private Object flattenObject(Object p0)
 throws org.json.JSONException {
      org.json.JSONObject v3;
      org.json.JSONArray v4;
      org.json.JSONArray v5;
      int v6;
      int i;
      if ( p0 == null )
        return null;
      if ( p0 instanceof org.json.JSONObject )
      {
        v3 = (org.json.JSONObject)p0;
        if ( !v3.optBoolean("fbsdk:create_object") )
        {
          if ( v3.has("id") )
          {
            return v3.getString("id");
          }
          else if ( v3.has("url") )
          {
            return v3.getString("url");
          }
        }
      }
      else if ( p0 instanceof org.json.JSONArray )
      {
        v4 = (org.json.JSONArray)p0;
        v5 = new org.json.JSONArray();
        v6 = v4.length();
        for ( i = 0; i < v6; ++i )
          v5.put(this.flattenObject(v4.get(i)));
        return v5;
      }
      return p0;
    }

    private void updateActionAttachmentUrls(
            java.util.List<String> p0,
            boolean p1)
    {
      java.util.List Image; // RETVAL
      java.util.List v4;
      java.util.Iterator v5;
      String v6;
      org.json.JSONObject v7;
      Image = this.action.getImage();
      if ( Image != null )
        v4 = Image;
      else
        v4 = new java.util.ArrayList(p0.size());
      v5 = p0.iterator();
      while ( v5.hasNext() )
      {
        v6 = (String)v5.next();
        v7 = new org.json.JSONObject();
        try
        {
          v7.put("url", v6);
          if ( p1 )
            v7.put("user_generated", true);
        }
        catch ( org.json.JSONException v8 )
        {
          throw new com.facebook.FacebookException("Unable to attach images", v8);
        }
        v4.add(v7);
      }
      this.action.setImage(v4);
    }

    protected android.os.Bundle getMethodArguments()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      this.putExtra(v1, "PREVIEW_PROPERTY_NAME", this.previewPropertyName);
      this.putExtra(v1, "ACTION_TYPE", this.actionType);
      v1.putBoolean("DATA_FAILURES_FATAL", this.dataErrorsFatal);
      this.putExtra(v1, "ACTION", this.flattenChildrenOfGraphObject(this.action.getInnerJSONObject()).toString());
      return v1;
    }

    protected android.os.Bundle setBundleExtras(android.os.Bundle p0)
    {
      this.putExtra(p0, "com.facebook.platform.extra.PREVIEW_PROPERTY_NAME", this.previewPropertyName);
      this.putExtra(p0, "com.facebook.platform.extra.ACTION_TYPE", this.actionType);
      p0.putBoolean("com.facebook.platform.extra.DATA_FAILURES_FATAL", this.dataErrorsFatal);
      this.putExtra(p0, "com.facebook.platform.extra.ACTION", this.flattenChildrenOfGraphObject(this.action.getInnerJSONObject()).toString());
      return p0;
    }

    public CONCRETE setDataErrorsFatal(boolean p0)
    {
      this.dataErrorsFatal = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setImageAttachmentFilesForAction(
            java.util.List<java.io.File> p0)
    {
      return this.setImageAttachmentFilesForAction(p0, false);
    }

    public CONCRETE setImageAttachmentFilesForAction(
            java.util.List<java.io.File> p0,
            boolean p1)
    {
      Validate.containsNoNulls(p0, "bitmapFiles");
      if ( this.action == null )
        throw new com.facebook.FacebookException("Can not set attachments prior to setting action.");
      this.updateActionAttachmentUrls(this.addImageAttachmentFiles(p0), p1);
      return (CONCRETE)this;
    }

    public CONCRETE setImageAttachmentFilesForObject(
            String p0,
            java.util.List<java.io.File> p1)
    {
      return this.setImageAttachmentFilesForObject(p0, p1, false);
    }

    public CONCRETE setImageAttachmentFilesForObject(
            String p0,
            java.util.List<java.io.File> p1,
            boolean p2)
    {
      Validate.notNull(p0, "objectProperty");
      Validate.containsNoNulls(p1, "bitmapFiles");
      if ( this.action == null )
        throw new com.facebook.FacebookException("Can not set attachments prior to setting action.");
      this.updateObjectAttachmentUrls(p0, this.addImageAttachmentFiles(p1), p2);
      return (CONCRETE)this;
    }

    public CONCRETE setImageAttachmentsForAction(
            java.util.List<android.graphics.Bitmap> p0)
    {
      return this.setImageAttachmentsForAction(p0, false);
    }

    public CONCRETE setImageAttachmentsForAction(
            java.util.List<android.graphics.Bitmap> p0,
            boolean p1)
    {
      Validate.containsNoNulls(p0, "bitmaps");
      if ( this.action == null )
        throw new com.facebook.FacebookException("Can not set attachments prior to setting action.");
      this.updateActionAttachmentUrls(this.addImageAttachments(p0), p1);
      return (CONCRETE)this;
    }

    public CONCRETE setImageAttachmentsForObject(
            String p0,
            java.util.List<android.graphics.Bitmap> p1)
    {
      return this.setImageAttachmentsForObject(p0, p1, false);
    }

    public CONCRETE setImageAttachmentsForObject(
            String p0,
            java.util.List<android.graphics.Bitmap> p1,
            boolean p2)
    {
      Validate.notNull(p0, "objectProperty");
      Validate.containsNoNulls(p1, "bitmaps");
      if ( this.action == null )
        throw new com.facebook.FacebookException("Can not set attachments prior to setting action.");
      this.updateObjectAttachmentUrls(p0, this.addImageAttachments(p1), p2);
      return (CONCRETE)this;
    }

    void updateObjectAttachmentUrls(
            String p0,
            java.util.List<String> p1,
            boolean p2)
    {
      com.facebook.model.OpenGraphObject v4;
      com.facebook.model.GraphObjectList Image; // RETVAL
      com.facebook.model.GraphObjectList List;
      java.util.Iterator v7;
      String v8;
      com.facebook.model.GraphObject v9;
      try
      {
        v4 = (com.facebook.model.OpenGraphObject)this.action.getPropertyAs(p0, com.facebook.model.OpenGraphObject.class);
        if ( v4 == null )
          throw new IllegalArgumentException("Action does not contain a property '" + p0 + "'");
        if ( !v4.getCreateObject() )
          throw new IllegalArgumentException("The Open Graph object in '" + p0 + "' is not marked for creation");
        Image = v4.getImage();
        if ( Image != null )
          List = Image;
        else
          List = GraphObject$Factory.createList(com.facebook.model.GraphObject.class);
        v7 = p1.iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v9 = GraphObject$Factory.create();
          v9.setProperty("url", v8);
          if ( p2 )
            v9.setProperty("user_generated", Boolean.valueOf(true));
          List.add(v9);
        }
        v4.setImage(List);
        return;
      }
      catch ( com.facebook.FacebookGraphObjectException e )
      {
        throw new IllegalArgumentException("Property '" + p0 + "' is not a graph object");
      }
    }

}
