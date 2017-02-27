[Uno.Compiler.UxGenerated]
public partial class Light: Fuse.Controls.Text
{
    static Light()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Light()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 20f;
        this.TextAlignment = Fuse.Controls.TextAlignment.Center;
        this.Color = Fuse.Drawing.Colors.White;
        this.Font = global::SignupOrLogin.Light;
    }
}
