void main()
{
	if(true	&& true
		|| (false && false)
	)
	{
		return;
	}
	
	if(true) return;
	if(true)
		return;
	
	if(true){code();}
	if(true)
	{
		code();
	}
	
	
	auto lambda1 = [&]{code();};
	auto lambda1 = [&]
	{
		code();
	};
		
	auto lambda2 = [&](){code();};
	auto lambda2 = [&]()
	{
		code();
	};
	
	
	if([&]->bool{return code();}){code();}
	if([&] -> bool
	{
		return code();
	})
	{
		code();
	}
	
	if([&]()->bool{return code();}){code();}
	if([&]() -> bool
	{
		return code();
	})
	{
		code();
	}
	
	
	auto a1 = new CClass(true, [&]{code();}, nullptr);
	auto a1 = new CClass(true, [&]
	{
		code();
	}, nullptr);
	
	auto a2 = new CClass(true, [&](){code();}, nullptr);
	auto a2 = new CClass(true, [&]()
	{
		code();
	}, nullptr);
	
	auto a3 = new CClass(true, [&](int i){code();}, nullptr);
	auto a3 = new CClass(true, [&](int i)
	{
		code();
	}, nullptr);
}
