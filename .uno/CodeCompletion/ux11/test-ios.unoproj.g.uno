sealed class testios_FuseControlsPanel_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Panel _obj;
    public testios_FuseControlsPanel_Color_Property(Fuse.Controls.Panel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.Color; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public testios_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_FuseControlsTextControl_TextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public testios_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.TextColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.TextColor = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class testios_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public testios_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get() { return _obj.Items; }
    public override void Set(object v, global::Uno.UX.IPropertyListener origin) { _obj.Items = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class testios_FuseControlsShape_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Shape _obj;
    public testios_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.Color; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_FuseElementsElement_Height_Property: Uno.UX.Property<Uno.UX.Size>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public testios_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size Get() { return _obj.Height; }
    public override void Set(Uno.UX.Size v, global::Uno.UX.IPropertyListener origin) { _obj.Height = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class testios_PageWithTitle_HeaderColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly PageWithTitle _obj;
    public testios_PageWithTitle_HeaderColor_Property(PageWithTitle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.HeaderColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetHeaderColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_FuseControlsPage_Title_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.Page _obj;
    public testios_FuseControlsPage_Title_Property(Fuse.Controls.Page obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Title; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Title = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class testios_PageWithTitle_HeaderTextColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly PageWithTitle _obj;
    public testios_PageWithTitle_HeaderTextColor_Property(PageWithTitle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.HeaderTextColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetHeaderTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_PageWithTitle_Instructions_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly PageWithTitle _obj;
    public testios_PageWithTitle_Instructions_Property(PageWithTitle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Instructions; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetInstructions(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_FuseControlsRectangle_CornerRadius_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Rectangle _obj;
    public testios_FuseControlsRectangle_CornerRadius_Property(Fuse.Controls.Rectangle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.CornerRadius; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetCornerRadius(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_FuseElementsElement_Opacity_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public testios_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class testios_FuseEffectsBlur_Radius_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Effects.Blur _obj;
    public testios_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Radius; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.Radius = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
